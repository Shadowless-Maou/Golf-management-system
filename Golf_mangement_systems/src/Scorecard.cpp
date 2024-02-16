#include "Scorecard.h"

Scorecard::Scorecard()
{
    strokes[0]=0;
    score[0]=0;
    score_count=0;
    handicap=0;
    points [0]=0;
    pointstotal=0;
}
void Scorecard::setScore()
{
 //Score playerscore();
    int a, n=1;
    //1
    for (int i=1;i<19;i++){
        cout<<"What were the number of strokes taken for hole "<<n<<"?"<<endl;
        cin>>a;
        strokes[i]=a;
        score[i] = a-par[i];
        for(int k=0;k<handicap;k++){
            int counter=handicap;
            if (counter==1){score[1]=(score[1]-1);}
            if (counter==19){score[1]=(score[1]-1);}
            if (counter==37){score[1]=(score[1]-1);}

            if (counter==2){score[2]=(score[2]-1);}
            if (counter==20){score[2]=(score[2]-1);}
            if (counter==38){score[2]=(score[2]-1);}

            if (counter==3){score[3]=(score[3]-1);}
            if (counter==21){score[3]=(score[3]-1);}
            if (counter==39){score[3]=(score[3]-1);}

        if (counter==4){score[4]=(score[4]-1);}
        if (counter==22){score[4]=(score[4]-1);}
        if (counter==40){score[4]=(score[4]-1);}

        if (counter==5){score[5]=(score[5]-1);}
        if (counter==23){score[5]=(score[5]-1);}
        if (counter==41){score[5]=(score[5]-1);}

        if (counter==6){score[6]=(score[6]-1);}
        if (counter==24){score[6]=(score[6]-1);}
        if (counter==42){score[6]=(score[6]-1);}

        if (counter==7){score[7]=(score[7]-1);}
        if (counter==25){score[7]=(score[7]-1);}
        if (counter==43){score[7]=(score[7]-1);}

        if (counter==8){score[8]=(score[8]-1);}
        if (counter==26){score[8]=(score[8]-1);}
        if (counter==44){score[8]=(score[8]-1);}

        if (counter==9){score[9]=(score[9]-1);}
        if (counter==27){score[9]=(score[9]-1);}
        if (counter==45){score[9]=(score[9]-1);}

        if (counter==10){score[10]=(score[10]-1);}
        if (counter==28){score[10]=(score[10]-1);}
        if (counter==46){score[10]=(score[10]-1);}

        if (counter==11){score[11]=(score[11]-1);}
        if (counter==29){score[11]=(score[11]-1);}
        if (counter==47){score[11]=(score[11]-1);}

        if (counter==12){score[12]=(score[12]-1);}
        if (counter==30){score[12]=(score[12]-1);}
        if (counter==48){score[12]=(score[12]-1);}

        if (counter==13){score[13]=(score[13]-1);}
        if (counter==31){score[13]=(score[13]-1);}
        if (counter==49){score[13]=(score[13]-1);}

        if (counter==14){score[14]=(score[14]-1);}
        if (counter==32){score[14]=(score[14]-1);}
        if (counter==50){score[14]=(score[14]-1);}

        if (counter==15){score[15]=(score[15]-1);}
        if (counter==33){score[15]=(score[15]-1);}
        if (counter==51){score[15]=(score[15]-1);}

        if (counter==16){score[16]=(score[16]-1);}
        if (counter==34){score[16]=(score[16]-1);}
        if (counter==52){score[16]=(score[16]-1);}

        if (counter==17){score[17]=(score[17]-1);}
        if (counter==35){score[17]=(score[17]-1);}
        if (counter==53){score[17]=(score[17]-1);}

        if (counter==18){score[18]=(score[18]-1);}
        if (counter==36){score[18]=(score[18]-1);}
        if (counter==54){score[18]=(score[18]-1);}
        counter--;
        }
         n=n+1;
    }
}


void Scorecard::setPoints(){

    for (int i=1;i<19;i++){
    if ((score[i]==2) || (score[i]>2)){points[i]=0;}
    else if (score[i]==1){points[i]=1;}
    else if (score[i]==-0){points[i]=2;}
    else if (score[i]==-1){points[i]=3;}
    else if (score[i]==-2){points[i]=4;}
    else if (score[i]==-3){points[i]=5;}
    else if (score[i]==-4){points[i]=6;}
    else if (score[i]==-5){points[i]=7;}
    else if (score[i]==-6){points[i]=8;}
    else if (score[i]==-7){points[i]=9;}
    pointstotal=pointstotal+points[i];}

}

void Scorecard::display(){
cout<<"Handicap: "<<handicap<<endl;
cout<<"Total Points: "<<pointstotal<<endl;
cout<<"_________________________________________________________________________________________________________"<<endl;
cout<<" Hole: \t Par: \t   Strokes:\t Score: \tPoints: \t "<<endl;
cout<<"_________________________________________________________________________________________________________"<<endl;
cout<<"   1\t  4\t\t "<<strokes[1]<<"\t    "<<score[1]<<"\t \t  "<<points[1]<<endl;
cout<<"   1\t  5\t\t "<<strokes[2]<<"\t    "<<score[2]<<"\t \t  "<<points[2]<<endl;
cout<<"   1\t  3\t\t "<<strokes[3]<<"\t    "<<score[3]<<"\t \t  "<<points[3]<<endl;
cout<<"   1\t  4\t\t "<<strokes[4]<<"\t    "<<score[4]<<"\t \t  "<<points[4]<<endl;
cout<<"   1\t  4\t\t "<<strokes[5]<<"\t    "<<score[5]<<"\t \t  "<<points[5]<<endl;
cout<<"   1\t  5\t\t "<<strokes[6]<<"\t    "<<score[6]<<"\t \t  "<<points[6]<<endl;
cout<<"   1\t  3\t\t "<<strokes[7]<<"\t    "<<score[7]<<"\t \t  "<<points[7]<<endl;
cout<<"   1\t  5\t\t "<<strokes[8]<<"\t    "<<score[8]<<"\t \t  "<<points[8]<<endl;
cout<<"   1\t  3\t\t "<<strokes[9]<<"\t    "<<score[9]<<"\t \t  "<<points[9]<<endl;
cout<<"   1\t  5\t\t "<<strokes[10]<<"\t    "<<score[10]<<"\t \t  "<<points[10]<<endl;
cout<<"   1\t  3\t\t "<<strokes[11]<<"\t    "<<score[11]<<"\t \t  "<<points[11]<<endl;
cout<<"   1\t  4\t\t "<<strokes[12]<<"\t    "<<score[12]<<"\t \t  "<<points[12]<<endl;
cout<<"   1\t  4\t\t "<<strokes[13]<<"\t    "<<score[13]<<"\t \t  "<<points[13]<<endl;
cout<<"   1\t  4\t\t "<<strokes[14]<<"\t    "<<score[14]<<"\t \t  "<<points[14]<<endl;
cout<<"   1\t  4\t\t "<<strokes[15]<<"\t    "<<score[15]<<"\t \t  "<<points[15]<<endl;
cout<<"   1\t  5\t\t "<<strokes[16]<<"\t    "<<score[16]<<"\t \t  "<<points[16]<<endl;
cout<<"   1\t  4\t\t "<<strokes[17]<<"\t    "<<score[17]<<"\t \t  "<<points[17]<<endl;
cout<<"   1\t  3\t\t "<<strokes[18]<<"\t    "<<score[18]<<"\t \t  "<<points[18]<<endl;
cout<<"********************************************************************************************************"<<endl;
}
void Scorecard:RecordSCoreCard()
{
    ofstream myfile;
    myfile.open(""+pps+".dat");
    myfile<<"Handicap: "<<handicap<<endl;
    myfile<<"Handicap: "<<handicap<<endl;
    myfile<<"Total Points: "<<pointstotal<<endl;
    myfile<<"_________________________________________________________________________________________________________"<<endl;
    myfile<<" Hole: \t Par: \t   Strokes:\t Score: \tPoints: \t "<<endl;
    myfile<<"_________________________________________________________________________________________________________"<<endl;
    myfile<<"   1\t  4\t\t "<<strokes[1]<<"\t    "<<score[1]<<"\t \t  "<<points[1]<<endl;
    myfile<<"   1\t  5\t\t "<<strokes[2]<<"\t    "<<score[2]<<"\t \t  "<<points[2]<<endl;
    myfile<<"   1\t  3\t\t "<<strokes[3]<<"\t    "<<score[3]<<"\t \t  "<<points[3]<<endl;
    myfile<<"   1\t  4\t\t "<<strokes[4]<<"\t    "<<score[4]<<"\t \t  "<<points[4]<<endl;
    myfile<<"   1\t  4\t\t "<<strokes[5]<<"\t    "<<score[5]<<"\t \t  "<<points[5]<<endl;
    myfile<<"   1\t  5\t\t "<<strokes[6]<<"\t    "<<score[6]<<"\t \t  "<<points[6]<<endl;
    myfile<<"   1\t  3\t\t "<<strokes[7]<<"\t    "<<score[7]<<"\t \t  "<<points[7]<<endl;
    myfile<<"   1\t  5\t\t "<<strokes[8]<<"\t    "<<score[8]<<"\t \t  "<<points[8]<<endl;
    myfile<<"   1\t  3\t\t "<<strokes[9]<<"\t    "<<score[9]<<"\t \t  "<<points[9]<<endl;
    myfile<<"   1\t  5\t\t "<<strokes[10]<<"\t    "<<score[10]<<"\t \t  "<<points[10]<<endl;
    myfile<<"   1\t  3\t\t "<<strokes[11]<<"\t    "<<score[11]<<"\t \t  "<<points[11]<<endl;
    myfile<<"   1\t  4\t\t "<<strokes[12]<<"\t    "<<score[12]<<"\t \t  "<<points[12]<<endl;
    myfile<<"   1\t  4\t\t "<<strokes[13]<<"\t    "<<score[13]<<"\t \t  "<<points[13]<<endl;
    myfile<<"   1\t  4\t\t "<<strokes[14]<<"\t    "<<score[14]<<"\t \t  "<<points[14]<<endl;
    myfile<<"   1\t  4\t\t "<<strokes[15]<<"\t    "<<score[15]<<"\t \t  "<<points[15]<<endl;
    myfile<<"   1\t  5\t\t "<<strokes[16]<<"\t    "<<score[16]<<"\t \t  "<<points[16]<<endl;
    myfile<<"   1\t  4\t\t "<<strokes[17]<<"\t    "<<score[17]<<"\t \t  "<<points[17]<<endl;
    myfile<<"   1\t  3\t\t "<<strokes[18]<<"\t    "<<score[18]<<"\t \t  "<<points[18]<<endl;
    myfile<<"********************************************************************************************************"<<endl;

    myfile.close(pps+".dat"); // closes the file.
}
void Scorecard:::call()
{
    char ans;
    cout <<"would you like to get your scorecard ?"<<endl;
    cin>>ans;
    if (ans == 'y')
    {
        cout<<"what is your pps number ?"<<endl;
        cin>>pps;
        ifstream myfile; // active the functions for data  input from files
        myfile.open("pps.dat");// open the file scorecard

        myfile>>handicap
              >>pointstotal
              >>strokes[1]>>score[1]>>points[1]
              >>strokes[2]>>score[2]>>points[2]
              >>strokes[3]>>score[3]>>points[3]
              >>strokes[4]>>score[4]>>points[4]
              >>strokes[5]>>score[5]>>points[5]
              >>strokes[9]>>score[9]>>points[9]
              >>strokes[10]>>score[10]>>points[10]
              >>strokes[11]>>score[11]>>points[11]
              >>strokes[12]>>score[12]>>points[12]
              >>strokes[13]>>score[13]>>points[13]
              >>strokes[14]>>score[14]>>points[14]
              >>strokes[15]>>score[15]>>points[15]
              >>strokes[16]>>score[16]>>points[16]
              >>strokes[17]>>score[17]>>points[17]
              >>strokes[18]>>score[18]>>points[18]
              >>upaid;
        myfile.close("pps); // closes the file.

    }

}

Scorecard::~Scorecard()
{
    //dtor
}
