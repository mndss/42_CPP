#include <iostream>
#include <PhoneBook.hpp>
#include <Contact.hpp>
#include <gtest/gtest.h>
#include <string>

using namespace std;

TEST(AddContact, setFirstNameNormalName) {
	Contact contact;
	contact.setFirstName("Eduardo");
	string name = contact.getFirstName();

	EXPECT_EQ(name, "Eduardo");
}

TEST(AddContact, setFirstNameWithNumbers) {
	Contact contact;
	contact.setFirstName("Eduardo 42");
	string name = contact.getFirstName();

	EXPECT_EQ(name, "Eduardo 42");
}

TEST(AddContact, setFirstNameTestWithoutName) {
	Contact contact;
	contact.setFirstName("");
	string name = contact.getFirstName();

	EXPECT_EQ(name, "");
}

TEST(AddContact, setFirstNameTestCompostName) {
	Contact contact;
	contact.setFirstName("Luiz parça");
	string name = contact.getFirstName();

	EXPECT_EQ(name, "Luiz parça");
}

TEST(AddContact, setFirstNameTestInvalidName) {
	PhoneBook phone;
	string name = "!@#$%!@%@#$";

	EXPECT_EQ(phone.isValidName(name), false);
}

//==================================================================================

TEST(AddContact, setLastNameNormalName) {
	Contact contact;
	contact.setLastName("Mendes");
	string name = contact.getLastName();

	EXPECT_EQ(name, "Mendes");
}

TEST(AddContact, setLastNameWithNumbers) {
	Contact contact;
	contact.setLastName("Mendes 42");
	string name = contact.getLastName();

	EXPECT_EQ(name, "Mendes 42");
}

TEST(AddContact, setLastNameTestWithoutName) {
	Contact contact;
	contact.setLastName("");
	string name = contact.getLastName();

	EXPECT_EQ(name, "");
}

TEST(AddContact, setLastNameTestCompostName) {
	Contact contact;
	contact.setLastName("luiz parça");
	string name = contact.getLastName();

	EXPECT_EQ(name, "luiz parça");
}

//=========================================================

TEST(ValidName, invalidCharcteres) {
	PhoneBook phone;

	EXPECT_EQ(phone.isValidName("!@#$!@$"), false);
}

TEST(ValidName, nameWithSpace) {
	PhoneBook phone;

	EXPECT_EQ(phone.isValidName("Eduardo "), true);
}

TEST(ValidName, nameAndNumbers) {
	PhoneBook phone;

	EXPECT_EQ(phone.isValidName("Eduardo 1234"), true);
}

TEST(ValidName, voidName) {
	PhoneBook phone;

	EXPECT_EQ(phone.isValidName(""), false);
}

//===============================================================


TEST(ValidNumber, voidNumber) {
	PhoneBook phone;

	EXPECT_EQ(phone.isValidNumber(""), false);
}

TEST(ValidNumber, numberWithSimbols) {
	PhoneBook phone;

	EXPECT_EQ(phone.isValidNumber("+55 11 128740912"), false);
}

TEST(ValidNumber, correctNumber) {
	PhoneBook phone;

	EXPECT_EQ(phone.isValidNumber("11 128740912"), true);
}

TEST(ValidNumber, onlySimbols) {
	PhoneBook phone;

	EXPECT_EQ(phone.isValidNumber("@#!$%!@#$@"), false);
}

//=============================================================

TEST(darkSecret, validSecret) {
	Contact contact;
	string secret = "viemos em paz \0/";

	contact.setDarkSecret(secret);
	EXPECT_EQ(contact.getDarkSecret(), "viemos em paz \0/");
}

TEST(darkSecret, validSecret2) {
	Contact contact;
	string secret = "salve quebrada";

	contact.setDarkSecret(secret);
	EXPECT_EQ(contact.getDarkSecret(), secret);
}

TEST(darkSecret, withoutSecret) {
	Contact contact;
	string secret = "";

	contact.setDarkSecret(secret);
	EXPECT_EQ(contact.getDarkSecret(), secret);
}

//=============================================================================================

TEST(validID, crazyValuesToId) {
	PhoneBook phone;
	
	phone.NewContact();
	phone.NewContact();

	EXPECT_EQ(phone.isValidId("Salve"), 0);
	EXPECT_EQ(phone.isValidId("9999999999999999"), 0);
	EXPECT_EQ(phone.isValidId("9"), 0);
	EXPECT_EQ(phone.isValidId("1"), 1);
	EXPECT_EQ(phone.isValidId("2"), 2);
	EXPECT_EQ(phone.isValidId("-12452"), 0);
}

//===============================================================================================
