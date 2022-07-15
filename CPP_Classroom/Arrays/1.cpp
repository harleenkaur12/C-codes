#include<iostream>
using namespace  std;

void traverseArray(double array[],int size){
	for(int i=0;i<size;i++){
		if(array[i]==-34.8045265148){
			cout << 0 <<" ";
		}else{
			cout << array[i]<<" ";
		}
	}
	cout <<endl;
}

void insertElement(double arr[],double element,int position,int size){
	int count{0};
	for(int i=0;i<size;i++){
		if(arr[i]!=-34.8045265148) count++;
	}
	if(count==size){
		cout << "There is no space for Insertion"<<endl;
		return;
	}else if(position>size-1){
		cout << "Array Index Out Of Bound's"<<endl;
		return;
	}else if(arr[position]==-34.8045265148){
		arr[position]=element;
		cout << "Element Inserted Successfully"<<endl;
		return;
	}
	
	for(int i=size-1;i>=position;i--){
		arr[i]=arr[i-1];
	}
	arr[position]=element;
	arr[size-1]=-34.8045265148;
	cout << "Element Inserted Successfully"<<endl;
}

int searchElement(double arr[],double ele,int size){
	for(int i=0;i<size;i++){
		if(arr[i]==ele) return i;
	}
	return -1;
}

void deleteElements(double arr[],int position){
	arr[position]=-34.8045265148;
}

int main()
{
    int input=0;
    cout<<"Enter The No Of Elements You Want to Add:-";
    cin>>input;
    const int val=input;
    double foo[val];
    for(int i=0;i<input;i++){
    	foo[i]=-34.8045265148;
	}
    //operations to be handled by this code
    enum arrayoperations{traverse=1,insert,search, deleteElement};

    do{
        int options=0;
        cout <<"==============================================="<<endl;
        cout<<"Choose any of the following operations:"<<endl;
        cout<<"1. Traverse Array"<<endl;
        cout<<"2. Insert at a location"<<endl;
        cout<<"3. Search element in array"<<endl;
        cout<<"4. Delete Element from array"<<endl;
        cout <<"==============================================="<<endl;
        cout <<endl;
        cout << "Enter Your Option:-";
        cin>>options;

        switch(options)
        {
            case traverse:
            	traverseArray(foo,input);
            	break;
            case insert:
            	{
            		double element{0};
					int pos{0};
	            	cout << "Enter The Value And poition of element:-";
	            	cin >> element>>pos;
	            	insertElement(foo,element,pos,input);
	            	break;	
				}
            case search:
            	{
            		double element{0};
            		cout << "Enter Your Element:";
            		cin >> element;
            		int index=searchElement(foo,element,input);
        			if(index==-1){
        				cout << "Your Element Does't exist"<<endl;
					}else{
						cout << "Your Element is Present at index:-"<<index <<endl;
					}
					break;	
				}
            case deleteElement:
			{
				double element{0};
            	cout << "Enter The Element You Want To Delete:-";
            	cin >> element;
            	int index = searchElement(foo,element,input);
            	if(index!=-1){
            		deleteElements(foo,index);
				}else{
        			cout << "Your Element Does't exist"<<endl;
				}
				break;
			}
            	
            default:
                cout<<"Invalid operation" <<endl;;
        }

		cout << "Enter -1 To Exit Program or 1 to continue:-";
		cin >> options;
		if(options==-1) break; 
    }while(1);

    for(int counter=0; counter<val; counter++)
    {
    	if(foo[counter]==-34.8045265148) {
    		cout<<"value for index "<<counter<<" is "<<0<<endl;
		}else{
			cout<<"value for index "<<counter<<" is "<<foo[counter]<<endl;	
		}
    }


    return 0;
}