#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Product
{
 private:
        int productID;
        int quantity;
        string description;
        string name;
        string category;
        double price;

  public:
        Product():productID(0),quantity(0),description("nice"),name("product"),category("electronics"),price(0){};
        Product(int id,int quan,string des,string title,string cat,double cost):productID(id),quantity(quan),description(des),name(title),category(cat),price(cost){};
        
        //setter
        void setid(int& id){productID=id;}

        void setquantity(int& quantity){this->quantity=quantity;}
        
        void setdescription(string& des){ description=des;}

        void setname(string& name){this->name=name;} 

        void setcategory(string& category){this->category=category;}

        void setprice(double& cost){price=cost;}


        //getter
        int getid() const{ return productID;}

        int getquantity()const{return quantity;}

        string getdescription()const{return description;}

        string getname()const{return name;}

        string getcategory()const{return category;}

        double getprice()const{return price;}

        void display()
        {
            cout<<"ID :"<<productID<<endl;
            cout<<"quantity :"<<quantity<<endl;
            cout<<"Description :"<<description<<endl;
            cout<<"Name :"<<name<<endl;
            cout<<"Category :"<<category<<endl;
            cout<<"Price :"<<price<<endl;
        }
};

class ProductRepository
{
 //CRUD operations
    private:
    vector<Product>products;
    int productcount;

    public:

    void addProduct(Product& prod)
    {
        products.push_back(prod);
    }

    void removeProduct(Product& prod)
    {
     products.pop_back();
    }

    void displayproduct()
    {
      for(int i=0;i<products.size();i++)
      {
        products[i].display();
      }
    }
};

class ProductService
{
 //Discount and Total
};

class FileIO
{
  //Add the products to the file
};

class UIManager
{
  public:
  void menu()
  {
    cout<<"Welcome to the TFL store."<<endl;
    cout<<"**************************************"<<endl;
    cout<<"Choose the options from the menu"<<endl;
    cout<<"**************************************"<<endl;
    cout<<"1) Add product"<<endl;
    cout<<"2)Remove product"<<endl;
    cout<<"3)Update product"<<endl;
    cout<<"4)Serialize (Add product to the file)"<<endl;
    cout<<"5) Deserialize (Copy from the file)"<<endl;
    cout<<"6) Exit"<<endl;
    cout<<"**************************************"<<endl;
    
  }

};

int main()
{
    int choice;
    cin>>choice;

    Product p1(1,3,"perfume","Bellavita","CEO Men",500);
    Product p2(2,4,"Watch","TITAN","Accesories",5000);
    Product p3(3,1,"Shoes","Nike","Footware",2500);

    UIManager show;
    show.menu();   
    
    switch(choice)
    {
     case 1:
     break;

     case 2:
     break;

     case 3:
     break;

     case 4:
     break;

     case 5:
     break;

     case 6:
     break;
    }
   
    return 0;
}