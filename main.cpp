#include <iostream>

using namespace std;

int main()

{

	float a,b,c;

	cout<<"Largest No. out of Three \n\n";

	cout<<"\nENTER FIRST NO. :";

	cin>>a;

	cout<<"ENTER SECOND NO. :";

	cin>>b;

	cout<<"ENTER THIRD NO. :";

	cin>>c;

	if(a>b)

	{

		if(a>c)



			{

				cout<<"Largest NO. :"<<a;

			}

        else

		    {

                cout<<"Largest NO. :"<<c;

		    }



	}

	else

	{

          if(b>c)



			{

				cout<<"Largest NO. :"<<b;

			}

		   else

		   {

				cout<<"Largest NO. :"<<c;

		   }

	}

	return 0;

}
