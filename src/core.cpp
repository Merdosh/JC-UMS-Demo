#include "core.h"

using namespace std;

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Start of UMSFile procedures
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

UMSFile::UMSFile()
{

}

UMSFile::~UMSFile()
{

}

UMSFile::SetLocation(LocationType_t Location)
{

}

UMSFile::ChangeStorageLocation(LocationType_t Location)
{

}

UMSFile::Store()
{

}

UMSFile::Store(LocationType_t Location)
{
	LocationType_t backup = this->Location;
	
	/* 
	   Because we want it to be possible for later, more complicated, 
	   procedures to refer to the internal Location without bugs, the
	   decision is made to temporarily change the file's location to the
	   given and then invoke the standard Load/Store routine. This 
	   avoids future code duplication requirements.
	*/
	this->Location = Location;
	this->Store();
	this->Location = backup;
}

UMSFile::Load()
{

}

UMSFile::Load(LocationType_t Location)
{
	LocationType_t backup = this->Location;
	
	/* 
	   Because we want it to be possible for later, more complicated, 
	   procedures to refer to the internal Location without bugs, the
	   decision is made to temporarily change the file's location to the
	   given and then invoke the standard Load/Store routine. This 
	   avoids future code duplication requirements.
	*/
	this->Location = Location;
	this->Load();
	this->Location = backup;	
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * End of UMSFile procedures
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Start of Person procedures
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

Person::Person()
{

}

Person::Person(long id)
{

}

Person::~Person()
{

}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * End of Person procedures
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Start of Configuration procedures
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

Configuration::Configuration()
{
	// throw(error:not implemented yet)
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * End of Configuration procedures
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Start of Guest procedures
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

Guest::Guest()
{
	
}

Guest::Guest(long id)
{

}

Guest::~Guest()
{

}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * End of Guest procedures
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Start of User procedures
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

User::User()
{

}

User::User(const char* fname /*first name*/,
		     const char* prepos /*Preposition ('tussenvoegsel')*/,
		     const char* lname /*last name*/,
		     const char* pass /*password*/)
{

}

User::~User()
{

}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * End of User procedures
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Start of SystemConfig procedures
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

SystemConfig::SystemConfig()
{
	// throw(error: Not Implemented Yet);
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * End of SystemConfig procedures
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Start of DatabaseConfig procedures
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

DatabaseConfig::DatabaseConfig()
{
	// throw(error: Not IMplemented YEt)
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * End of DatabaseConfig procedures
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Start of Page procedures
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

Page::Page()
{
	// throw(error: Not Implemented Yet);
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * End of Page procedures
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Start of MenuWindow procedures
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

MenuWindow::MenuWindow()
{
	// throw(error: Not Implemented Yet);
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * End of MenuWindow procedures
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * Start of DeprecatedClass procedures
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

BadClass::BadClass()
{
	// throw some error: decide later.
}

/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * End of DeprecatedClass procedures
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
