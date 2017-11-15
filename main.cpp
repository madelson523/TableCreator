#include "TableCreator.h"

void main() {
	//Administrator(AdminID : Int, Name : String, AccessLevel : Int)
	std::vector<std::string> adminID = { "0000", "1111", "2222", "3333", "4444", "5555", "6666", "7777", "8888", "9999" };
	std::vector<std::string> adminName = { "Mose", "Shakita", "Gino", "Forest", "Nestor", "Samantha", "Jenny", "Billy", "Ricardo", "Colette" };
	std::vector<std::string> adminAccessLevel = { "0", "0", "1", "2", "3", "3", "2", "1", "1", "2" };
	TableCreator::CreateTable("Administrator.txt", adminID, adminName, adminAccessLevel);

	//Hospital(HospitalID : Int, Name : String)
	std::vector<std::string> hospitalID = { "0", "1", "2" };
	std::vector<std::string> hospitalName = { "Mercyhealth", "SSM Health", "Dean" };
	TableCreator::CreateTable("Hospital.txt", hospitalID, hospitalName);

	//Doctor(DoctorID: Int, Name : String, Degree : String, Specialty : String, YearsWorked : Int, Pay : Int)
	std::vector<std::string> doctorID= { "4313", "2525", "4634", "3434", "5123", "7318", "8241", "9476", "4133", "9987" };
	std::vector<std::string> doctorName = { "Mose", "Lucius", "Gino", "Cheree", "Zachery", "Hellen", "Tommy", "Arturo", "Loan", "Colette" };
	std::vector<std::string> doctorDegree = { "Bachelor", "Bachelor", "Bachelor", "Masters", "PHD", "Bachelor", "Masters", "Masters", "Bachelor", "PHD" };
	std::vector<std::string> doctorSpecialty = { "Surgery-General", "Urology", "Infectious Disease", "Anesthesiology", "Anesthesiology", "Surgery-General", "Neurology", "Surgery-General", "Surgery-General", "Cardiovascular Disease" };
	std::vector<std::string> doctorYearsWorked = { "2", "3", "3", "1", "5", "6", "3", "4", "8", "4" };
	std::vector<std::string> doctorPay = { "50", "45", "45", "37", "20", "70", "83", "55", "70", "45" };
	TableCreator::CreateTable("Doctor.txt", doctorID, doctorName, doctorDegree, doctorSpecialty, doctorYearsWorked, doctorPay);

	//Patient(PatientID: Int, SSN : Int, Name : String, Age: Int)
	std::vector<std::string> patientID = { "0103", "0122", "8686", "8413", "3322", "1117", "7311", "9302", "1140", "0012" };
	std::vector<std::string> patientSSN = { "038-64-5086", "039-10-8187", "522-91-0806", "535-24-1061", "493-10-9833", "502-88-7757", "365-66-1686", "651-16-6370", "608-15-7095", "009-22-5046" };
	std::vector<std::string> patientName = { "Honey", "Rene", "Isaias", "An", "Madaline", "Echo", "Simon", "Alysia", "Debora", "Kurtis" };
	std::vector<std::string> patientAge = { "29", "46", "35", "46", "78", "18", "30", "56", "37", "78" };
	TableCreator::CreateTable("Patient.txt", patientID, patientSSN, patientName, patientAge);

	//Medications(MedicationID : Int, Name : String)
	std::vector<std::string> medicationID = { "82399", "48201", "93028", "84901", "78659", "86932", "11103", "03902", "06821", "85932" };
	std::vector<std::string> medicationName = { "Enadryl", "Agalpirox", "IbuProfen", "Finaderall", "Divirone", "Serorix", "Diclodox Hydroxythacin", "Apexicadren", "Benesirox Romitadine", "Nizocept" };
	TableCreator::CreateTable("Medications.txt", medicationID, medicationName);

	//SideEffect(Medication.MedicationID : Int, Type : String)
	//std::vector<std::string> medicationID = { "82399", "48201", "93028", "84901", "78659", "86932", "11103", "03902", "06821", "85932" };
	std::vector<std::string> sideEffectType = { "Cough", "Sneezing", "Cough", "Chills", "Fatigue", "Weakness", "Chest Pain", "Dizziness", "Weakness", "Chest Pain" };
	TableCreator::CreateTable("SideEffect.txt", medicationID, sideEffectType);
}