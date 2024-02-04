#include<iostream>
#include<math.h>
#include<algorithm>
#include<vector>
#include<unordered_set>
using namespace std;
void print(int a)
{
    if(a<=9)
    {
       cout<<a;
    }
    else
    {
        if(a==10)cout<<"a";
        else if(a==11)cout<<"b";
        else if(a==12)cout<<"c";
        else if(a==13)cout<<"d";
        else if(a==14)cout<<"e";
        else cout<<"f";
    }
}
void decimal_to_hexa(int a)
{
    int b[8]={0,0,0,0,0,0,0,0};
    int i=7;
    while(a!=0)
    {
       b[i]=a%2;
       a=a/2;
       i--;
    }
    int j=0,sum=0,sum2=0;
    for(i=3;i>=0;i--)
    {
       if(b[i]==1)
       {
        sum=sum+pow(2,j);
       }
       j++;
    }
    j=0;
    for(i=7;i>=4;i--)
    {
       if(b[i]==1)
       {
        sum2=sum2+pow(2,j);
       }
       j++;
    }
    print(sum);
    print(sum2);

}
int s_box(int c)
{
    int a[8]={0,0,0,0,0,0,0,0};
    for(int i=7;i>=0;i--)
    {
        a[i]=c%2;
        c=c/2;
    }
    int col=0,r=0,j=0;
    for(int i=7;i>=4;i--)
    {
        if(a[i]==1)
        {
            col=col+pow(2,j);
        }
        j++;
    }
    j=0;
    for(int i=3;i>=0;i--)
    {
        if(a[i]==1)
        {
            r=r+pow(2,j);
        }
        j++;
    }
    int t[16][16];
    t[0][0]=99;
    t[0][1]=124;
    t[0][2]=119;
    t[0][3]=123;
    t[0][4]=242;
    t[0][5]=107;
    t[0][6]=111;
    t[0][7]=197;
    t[0][8]=48;
    t[0][9]=1;
    t[0][10]=103;
    t[0][11]=43;
    t[0][12]=254;
    t[0][13]=215;
    t[0][14]=171;
    t[0][15]=118;
    t[1][0]=202;
    t[1][1]=130;
    t[1][2]=201;
    t[1][3]=125;
    t[1][4]=250;
    t[1][5]=89;
    t[1][6]=71;
    t[1][7]=240;
    t[1][8]=173;
    t[1][9]=212;
    t[1][10]=162;
    t[1][11]=175;
    t[1][12]=156;
    t[1][13]=164;
    t[1][14]=114;
    t[1][15]=192;
    t[2][0]=183;
    t[2][1]=253;
    t[2][2]=147;
    t[2][3]=38;
    t[2][4]=54;
    t[2][5]=63;
    t[2][6]=247;
    t[2][7]=204;
    t[2][8]=52;
    t[2][9]=165;
    t[2][10]=229;
    t[2][11]=241;
    t[2][12]=113;
    t[2][13]=216;
    t[2][14]=49;
    t[2][15]=21;
    t[3][0]=4;
    t[3][1]=199;
    t[3][2]=35;
    t[3][3]=195;
    t[3][4]=24;
    t[3][5]=150;
    t[3][6]=5;
    t[3][7]=154;
    t[3][8]=7;
    t[3][9]=18;
    t[3][10]=128;
    t[3][11]=226;
    t[3][12]=235;
    t[3][13]=39;
    t[3][14]=178;
    t[3][15]=117;
    t[4][0]=9;
    t[4][1]=131;
    t[4][2]=44;
    t[4][3]=26;
    t[4][4]=27;
    t[4][5]=110;
    t[4][6]=90;
    t[4][7]=160;
    t[4][8]=82;
    t[4][9]=59;
    t[4][10]=214;
    t[4][11]=179;
    t[4][12]=41;
    t[4][13]=227;
    t[4][14]=47;
    t[4][15]=132;
    t[5][0]=83;
    t[5][1]=209;
    t[5][2]=0;
    t[5][3]=237;
    t[5][4]=32;
    t[5][5]=252;
    t[5][6]=177;
    t[5][7]=91;
    t[5][8]=106;
    t[5][9]=203;
    t[5][10]=190;
    t[5][11]=57;
    t[5][12]=74;
    t[5][13]=76;
    t[5][14]=88;
    t[5][15]=207;
    t[6][0]=208;
    t[6][1]=239;
    t[6][2]=170;
    t[6][3]=251;
    t[6][4]=67;
    t[6][5]=77;
    t[6][6]=51;
    t[6][7]=133;
    t[6][8]=69;
    t[6][9]=249;
    t[6][10]=2;
    t[6][11]=127;
    t[6][12]=80;
    t[6][13]=60;
    t[6][14]=159;
    t[6][15]=168;
    t[7][0]=81;
    t[7][1]=163;
    t[7][2]=64;
    t[7][3]=143;
    t[7][4]=146;
    t[7][5]=157;
    t[7][6]=56;
    t[7][7]=245;
    t[7][8]=190;
    t[7][9]=182;
    t[7][10]=218;
    t[7][11]=33;
    t[7][12]=16;
    t[7][13]=255;
    t[7][14]=243;
    t[7][15]=210;
    t[8][0]=205;
    t[8][1]=12;
    t[8][2]=19;
    t[8][3]=236;
    t[8][4]=95;
    t[8][5]=151;
    t[8][6]=68;
    t[8][7]=23;
    t[8][8]=196;
    t[8][9]=167;
    t[8][10]=126;
    t[8][11]=61;
    t[8][12]=100;
    t[8][13]=93;
    t[8][14]=25;
    t[8][15]=115;
    t[9][0]=96;
    t[9][1]=129;
    t[9][2]=79;
    t[9][3]=220;
    t[9][4]=34;
    t[9][5]=42;
    t[9][6]=144;
    t[9][7]=136;
    t[9][8]=70;
    t[9][9]=238;
    t[9][10]=184;
    t[9][11]=20;
    t[9][12]=222;
    t[9][13]=94;
    t[9][14]=11;
    t[9][15]=219;
    t[10][0]=224;
    t[10][1]=50;
    t[10][2]=58;
    t[10][3]=10;
    t[10][4]=73;
    t[10][5]=6;
    t[10][6]=36;
    t[10][7]=92;
    t[10][8]=194;
    t[10][9]=211;
    t[10][10]=172;
    t[10][11]=98;
    t[10][12]=145;
    t[10][13]=149;
    t[10][14]=228;
    t[10][15]=121;
    t[11][0]=231;
    t[11][1]=200;
    t[11][2]=55;
    t[11][3]=109;
    t[11][4]=141;
    t[11][5]=213;
    t[11][6]=78;
    t[11][7]=169;
    t[11][8]=108;
    t[11][9]=86;
    t[11][10]=244;
    t[11][11]=234;
    t[11][12]=101;
    t[11][13]=122;
    t[11][14]=174;
    t[11][15]=8;
    t[12][0]=186;
    t[12][1]=120;
    t[12][2]=37;
    t[12][3]=46;
    t[12][4]=28;
    t[12][5]=166;
    t[12][6]=180;
    t[12][7]=198;
    t[12][8]=232;
    t[12][9]=221;
    t[12][10]=116;
    t[12][11]=31;
    t[12][12]=75;
    t[12][13]=189;
    t[12][14]=139;
    t[12][15]=138;
    t[13][0]=112;
    t[13][1]=62;
    t[13][2]=181;
    t[13][3]=102;
    t[13][4]=72;
    t[13][5]=03;
    t[13][6]=246;
    t[13][7]=14;
    t[13][8]=97;
    t[13][9]=53;
    t[13][10]=87;
    t[13][11]=185;
    t[13][12]=134;
    t[13][13]=193;
    t[13][14]=29;
    t[13][15]=158;
    t[14][0]=225;
    t[14][1]=248;
    t[14][2]=152;
    t[14][3]=17;
    t[14][4]=105;
    t[14][5]=217;
    t[14][6]=142;
    t[14][7]=148;
    t[14][8]=155;
    t[14][9]=30;
    t[14][10]=135;
    t[14][11]=233;
    t[14][12]=206;
    t[14][13]=85;
    t[14][14]=40;
    t[14][15]=223;
    t[15][0]=140;
    t[15][1]=161;
    t[15][2]=137;
    t[15][3]=13;
    t[15][4]=191;
    t[15][5]=230;
    t[15][6]=66;
    t[15][7]=104;
    t[15][8]=65;
    t[15][9]=153;
    t[15][10]=45;
    t[15][11]=15;
    t[15][12]=176;
    t[15][13]=84;
    t[15][14]=187;
    t[15][15]=22;
    return t[r][col];
}
void shift_row(int b[16])
{
    int c[16];
    c[0]=b[0];
    c[1]=b[5];
    c[2]=b[10];
    c[3]=b[15];
    c[4]=b[4];
    c[5]=b[9];
    c[6]=b[14];
    c[7]=b[3];
    c[8]=b[8];
    c[9]=b[13];
    c[10]=b[2];
    c[11]=b[7];
    c[12]=b[12];
    c[13]=b[1];
    c[14]=b[6];
    c[15]=b[11];
    for(int i=0;i<16;i++)
    {
      b[i]=c[i];
    }
}
int fun(int a,int b)
{
    int m[8]={0,0,0,0,0,0,0,0};
    int n[8]={0,0,0,0,0,0,0,0},i=7,j;
    while(a!=0)
    {
       m[i]=a%2;
       a=a/2;
       i--;
    }
    i=7;
    while(b!=0)
    {
      n[i]=b%2;
      b=b/2;
      i--;
    }
    i=7;
    vector<int>o,z;
    for(auto p:m)
    {
       if(p==1)
       {
           o.push_back(i);
       }
       i--;
    }
    i=7;
    for(auto p:n)
    {
       if(p==1)
       {
           z.push_back(i);
       }
       i--;
    }
    unordered_set<int>s;
    for(int i=0;i<o.size();i++)
    {
        for(int j=0;j<z.size();j++)
        {
            if(i==0)
            {
                s.insert(o[i]+z[j]);
            }
            else
            {
                auto lt=s.find(o[i]+z[j]);
                if(lt!=s.end())
                {
                    s.erase(lt);
                }
                else
                {
                    s.insert(o[i]+z[j]);
                }
            }
        }
    }
    vector<int>v;
    for(auto p:s)
    {
        v.push_back(p);
    }
    auto it=s.begin();
    while(it!=s.end())
    {
        if (*it >= 8)
        {
            int a = *it;
            auto vt=find(v.begin(),v.end(),a);
            v.erase(vt);
            if (a == 8)
            {
                auto lt = find(v.begin(),v.end(),4);
                if (lt == v.end())
                {
                    v.push_back(4);
                }
                else
                {
                    v.erase(lt);
                }
                lt = find(v.begin(),v.end(),3);
                if (lt == v.end())
                {
                    v.push_back(3);
                }
                else
                {
                    v.erase(lt);
                }
                lt = find(v.begin(),v.end(),1);
                if (lt == v.end())
                {
                    v.push_back(1);
                }
                else
                {
                    v.erase(lt);
                }
                lt = find(v.begin(),v.end(),0);
                if (lt == v.end())
                {
                    v.push_back(0);
                }
                else
                {
                    v.erase(lt);
                }
            }
            else if (a == 9)
            {
                auto lt = find(v.begin(),v.end(),4);
                if (lt == v.end())
                {
                    v.push_back(4);
                }
                else
                {
                    v.erase(lt);
                }
                lt = find(v.begin(),v.end(),5);
                if (lt == v.end())
                {
                    v.push_back(5);
                }
                else
                {
                    v.erase(lt);
                }
                lt = find(v.begin(),v.end(),1);
                if (lt == v.end())
                {
                    v.push_back(1);
                }
                else
                {
                    v.erase(lt);
                }
                lt = find(v.begin(),v.end(),2);
                if (lt == v.end())
                {
                    v.push_back(2);
                }
                else
                {
                    v.erase(lt);
                }  
            }
            else if (a == 10)
            {
                auto lt = find(v.begin(),v.end(),6);
                if (lt == v.end())
                {
                    v.push_back(6);
                }
                else
                {
                    v.erase(lt);
                }
                lt = find(v.begin(),v.end(),3);
                if (lt == v.end())
                {
                    v.push_back(3);
                }
                else
                {
                    v.erase(lt);
                }
                lt = find(v.begin(),v.end(),2);
                if (lt == v.end())
                {
                    v.push_back(2);
                }
                else
                {
                    v.erase(lt);
                }
                lt = find(v.begin(),v.end(),5);
                if (lt == v.end())
                {
                    v.push_back(5);
                }
                else
                {
                    v.erase(lt);
                }
            }
        }
        it++;
    }
    int sum=0;
    for(auto p:v)
    {
        sum=sum+pow(2,p);
    }
    return sum;

}
void matrix_mul(int a[4][4],int b[4][4],int cm[16])
{
   int c[4][4],sum=0;
   for(int i=0;i<4;i++)
   {
    for(int j=0;j<4;j++)
    {
        for(int k=0;k<4;k++)
        {
            sum=sum^(fun(a[i][k],b[k][j]));
        }
        c[i][j]=sum;
        sum=0;        
    }
   }
   int l=0;
   for(int i=0;i<4;i++)
   {
    for(int j=0;j<4;j++)
    {
        cm[l]=c[i][j];
        l++;
    }
   }
}
void mix_column(int a[16])
{
    int maa[4][4]={2,3,1,1,1,2,3,1,1,1,2,3,3,1,1,2};
    int mab[4][4],mac[16];
    int k=0;
     for(int i=0;i<4;i++)
     {
      for(int j=0;j<4;j++)
      {
        mab[i][j]=a[k];
        k++;
      }
     } 
     matrix_mul(maa,mab,mac);
     for(int i=0;i<16;i++)
     {
        a[i]=mac[i];
     }
   
}
void g(int l[4])
{
    int r[4][10];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<10;j++)
        {
            r[i][j]=0;
        }
    }
    r[0][0]=1;
    r[0][1]=2;
    r[0][2]=4;
    r[0][3]=8;
    r[0][4]=16;
    r[0][5]=32;
    r[0][6]=64;
    r[0][7]=128;
    r[0][8]=27;
    r[0][9]=54;
    int p=l[0];
    for(int i=1;i<4;i++)
    {
        l[i-1]=l[i];
    }
    l[3]=p;
    for(int i=0;i<4;i++)
    {
        l[i]=s_box(l[i]);
    }
    static int x=0;
    for(int i=0;i<4;i++)
    {
        l[i]=l[i]^r[i][x];
    }
    x++;

}
void key_expension(int k[16])
{
    int a[4][4],r=0,b[4][4];
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            a[j][i]=k[r];
            r++;
        }
    }
    int l[4];
    for(int i=0;i<4;i++)
    {
        l[i]=a[i][3];
    }
    g(l);
    for(int i=0;i<4;i++)
    {
        b[i][0]=l[i]^a[i][0];
    }
    for(int i=1;i<4;i++)
    {
         for(int j=0;j<4;j++)
         {
            b[j][i]=b[j][i-1]^a[j][i];
         }
    }
    r=0;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            k[r]=b[j][i];
            r++;
        }
    }
}
void key_addition(int b[16],int k[16])
{
    for(int i=0;i<16;i++)
    {
        b[i]=b[i]^k[i];
    }
}
int main()
{
   char a[16];
  int b[16];
  char k[16];
  cout<<"ENTER KEY, KEY SHOULD BE 16 CHARACTER LONG, SPACE AND ENTER IS NOT CONSIDERED AS CHARACTERS!!\n";
  for(int i=0;i<16;i++)
  {
    cin>>k[i];
  }
  int p[16];
  for(int i=0;i<16;i++)
  {
    p[i]=k[i];
  }
  for(int i=0;i<16;i++)
  {
    a[i]=97+i;
    b[i]=a[i];
  }
  for(int i=0;i<16;i++)
  {
    b[i]=b[i]^k[i];
  }
  key_expension(p);
  for(int j=0;j<9;j++)
  {
    for(int i=0;i<16;i++)
    {
       b[i]=s_box(b[i]);
    }
    shift_row(b);
    mix_column(b);
    key_addition(b,p);
    key_expension(p);
  }
  for(int i=0;i<16;i++)
  {
    b[i]=s_box(b[i]);
  }
  shift_row(b);
  key_addition(b,p);
  for(auto p:b)
  {
    decimal_to_hexa(p);
  }
  return 0;
}