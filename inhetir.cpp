  #include<iostream>
  #include<conio.h>
  using namespace std;
  class a
  	{
  		public:
  			
  		int i=10,j=10;
  	    void ant()
  	
		{
  	     cout<<"no in base class: "<<i;
  	 }
	};
	class b:a
	{
		public:
			int k=10;
		void bat()
			{
				k+=i;
				cout<<"no in derived class: "<<k;
			}
	};
	
	int main()
	{
		a v;
		b m;
		v.ant();
		cout<<endl;
		m.bat();
		return 0;
		
	}
	