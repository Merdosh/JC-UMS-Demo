class UMSFile {
	private:
		
	protected:
		
	public:

}

class Person : public UMSFile {
	private:
	
	protected:
	
	public:

}

class Configuration: public UMSFile {
	private:

	protected:

	public:

}

class Guest: public Person {
	private:
	
	protected:
	
	public:
	
	
}

class User: public Person {
	private:
	
	protected:
	
	public:
	
	
}

class SystemConfig: virtual public Configuration {
	private:
	
	protected:
		
	public:
	
	
}

class DatabaseConfig: virtual public Configuration {
	private:
	
	protected:
	
	public:
	
}

class Page: public UMSFile {
	private:

	protected:

	public:

}

class MenuWindow: virtual public Page {
	private:

	protected:

	public:


}

