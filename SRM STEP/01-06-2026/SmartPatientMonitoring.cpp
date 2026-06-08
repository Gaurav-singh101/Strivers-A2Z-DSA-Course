///////////////   Level - 1  //////////////////
// Patient Vital Statistics Calculator



// #include<bits/stdc++.h>
// using namespace std ;

// struct Patient{
//     string name ;
//     int Heart_Rate ; 
//     int blood_pressure ; 
//     int temperature ; 
// };


// string find_status(int bp, int hr, int temp){
//     if(bp > 120 || hr > 100 || temp > 100)
//         return "Critical";

//     if(bp >= 100 && bp <= 120 &&
//        hr >= 60 && hr <= 100 &&
//        temp >= 97 && temp <= 99)
//         return "Stable";

//     return "Need To Check";
// }

// int main(){
//     Patient p ; 
//     cout<<"Input patient Name : ";
//     cin>>p.name ; 
//     cout<<"\n Heart Rate : ";
//     cin>>p.Heart_Rate ; 
//     cout<<"\n Blood Pressure : ";
//     cin>>p.blood_pressure ; 
//     cout<<"\n Temprature : ";
//     cin>>p.temperature ; 


//     string status = find_status(p.blood_pressure , p.Heart_Rate , p.temperature);

//     cout<<"\nPatient data :- ";
//     cout<<"\n Patient Name : "<<p.name;
//     cout<<"\n Heart Rate : "<<p.Heart_Rate;
//     cout<<"\n Temperature : "<<p.temperature;
//     cout<<"\n Status : "<<status ; 


//     return 0 ; 
// }








////////////////   Level 2   //////////////////



// #include<bits/stdc++.h>
// using namespace std;

// struct Patient{
//     string name;
//     int heartRate;
//     int bloodPressure;
//     int temperature;
// };

// bool isCritical(const Patient& p){
//     return p.bloodPressure > 120 ||
//            p.heartRate > 100 ||
//            p.temperature > 100;
// }

// int main(){

//     int n;
//     cout << "Enter number of patients: ";
//     cin >> n;

//     int totalCount = 0;
//     int sumTemp = 0;
//     int sumHR = 0;
//     int criticalCount = 0;

//     for(int i = 0; i < n; i++){

//         Patient p;

//         cout << "\nPatient " << i + 1 << "\n";

//         cout << "Name: ";
//         cin >> p.name;

//         cout << "Heart Rate: ";
//         cin >> p.heartRate;

//         cout << "Blood Pressure: ";
//         cin >> p.bloodPressure;

//         cout << "Temperature: ";
//         cin >> p.temperature;

//         if(isCritical(p))
//             criticalCount++;

//         totalCount++;
//         sumTemp += p.temperature;
//         sumHR += p.heartRate;
//     }

//     double avgTemp = (double)sumTemp / totalCount;
//     double avgHR = (double)sumHR / totalCount;

//     cout << "\n===== REPORT =====\n";
//     cout << "Total Patients   : " << totalCount << '\n';
//     cout << "Critical Patients: " << criticalCount << '\n';
//     cout << "Average Temp     : " << avgTemp << '\n';
//     cout << "Average HR       : " << avgHR << '\n';

//     return 0;
// }












/////////////////////  Level - 3  /////////////////


#include<bits/stdc++.h>
using namespace std;

struct Patient{
    string name;
    int heartRate;
    int bloodPressure;
    int temperature;
};

int main(){

    int n;
    cout << "Enter number of patients: ";
    cin >> n;

    vector<Patient> patients;

    for(int i = 0; i < n; i++){

        Patient p;

        cout << "\nPatient " << i + 1 << "\n";

        cout << "Name: ";
        cin >> p.name;

        cout << "Heart Rate: ";
        cin >> p.heartRate;

        cout << "Blood Pressure: ";
        cin >> p.bloodPressure;

        cout << "Temperature: ";
        cin >> p.temperature;

        patients.push_back(p);
    }

    // -------------------------
    // Imperative Approach
    // -------------------------

    vector<Patient> criticalImperative;

    for(auto &p : patients){
        if(p.heartRate > 120){
            criticalImperative.push_back(p);
        }
    }

    // -------------------------
    // Declarative Approach
    // -------------------------

    vector<Patient> criticalDeclarative;

    copy_if(
        patients.begin(),
        patients.end(),
        back_inserter(criticalDeclarative),
        [](const Patient& p){
            return p.heartRate > 120;
        }
    );

    cout << "\n=== Critical Patients (Imperative) ===\n";

    for(auto &p : criticalImperative){
        cout << p.name
             << " HR: "
             << p.heartRate
             << '\n';
    }

    cout << "\n=== Critical Patients (Declarative) ===\n";

    for(auto &p : criticalDeclarative){
        cout << p.name
             << " HR: "
             << p.heartRate
             << '\n';
    }

    return 0;
}