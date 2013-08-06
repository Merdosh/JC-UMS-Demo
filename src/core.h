class UMSFile {
	private:
		StorageType_t	StorageType;
		LocationType_t	LocationType;
	protected:
		Configuration*	FileConfig;
	public:
		UMSFile();
		~UMSFile();
		SetLocation(LocationType_t Location);
		ChangeStorageType(StorageType_t StoreType);
		Store();
		Store(LocationType_t Location);
		Load();
		Load(LocationType_t Location);
}

class Person : public UMSFile {
	private:
		String FirstName;
		String Preposition;
		String LastName;
		long  Id;
		Page * LastPage;
	public:
		Person();
		Person(long id);
		~Person();
}

class Configuration {
	public:
		Configuration()
}

class Guest: public Person {
	public:
		Guest();
		Guest(long id);
		~Guest();
	
}

class User: public Person {
	private:
		String EMail;
		String PhoneHome;
		String PhoneMobile;
		LevelMask_t AdminLevel;
	public:
		User(long id);
		User(const char* fname /*first name*/,
		     const char* prepos /*Preposition ('tussenvoegsel')*/,
		     const char* lname /*last name*/,
		     const char* pass /*password*/);
		~User();
	
}

class SystemConfig: virtual public Configuration {
	public:
		SystemConfig();
	
}

class DatabaseConfig: virtual public Configuration {
	public:
		DatabaseConfig();
}

class Page: public UMSFile {
	public:
		Page();
}

class MenuWindow: virtual public Page {
	public:
		MenuWindow();

}

class BadClass {
	public:
		BadClass();
}
