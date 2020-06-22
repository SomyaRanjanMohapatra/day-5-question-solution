   #include<iostream.h>
   #include<conio.h>
   void main()
   {
     clrscr();
     char ch;
     int num,rem,temp,dec=0,b=1;
     cout<<"Enter the Binary Number";
     cin>>num;
     temp=num;
     while(temp)
     {
       rem=temp%10;
       temp=temp/10;
       dec= dec + rem*b;
       b*=2;
     }
     cout<<"the decimal equivalent of"<<num<<"is"<<dec<<"\n";
     ch=dec;
     cout<<"THE ASCII VALUE OF THE BINARY NUMBER IS"<<ch;
   }
