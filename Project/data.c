int a[10];

void rando()
{
  int i,j,b,n=0;
  time_t t;
  srand((unsigned) time(&t));
  for(i=0;i<10;i++)
  {
    b=rand() % 11;
    for(j=0;j<=n;j++)
    {
      if(a[j]==b||b==0)
      {
        b=rand() % 11;
        j=-1;
      }
    }
    a[i]=b;
    n++;
  }
}

void start();

void restart()
{
    char ent;
    printf("\n\n\t\t\t\t  ~~~~~Press Enter to RESTART~~~~~");
    scanf("%c",&ent);
    start();
}

void topic0()
{
    char inp;
    int count=0,r=0,i,c,ia,corr=0,wrong=0;
    rando();
    for(i=0;i<10;i++)
    {
      system("clear");
      count++;
      test:
      printf("\n\n\t\t\t\t      ~~~~~Question %d~~~~~\n",count);
      printf("\n\t\t\t    Correct Answers=%d        Wrong Answers=%d\n\n\n\n",corr,wrong);
      r=a[i];
      switch(r)
      {
        case 1:{
                c=1;
                printf("\t\tGrand Central Terminal, Park Avenue, New York is the world's ________\n\n\n");
                printf("\t\t\t\t     1) largest railway station\n");
                printf("\t\t\t\t     2) highest railway station\n");
                printf("\t\t\t\t     3) longest railway station\n");
                printf("\t\t\t\t     4) None of the above\n");
                printf("\n\t\t\t\t   Enter correct option number: ");
                scanf("           %d",&ia);
                break;
               }
        case 2:{
                c=2;
                printf("\t\t   Entomology is the science that studies ________\n\n\n");
                printf("\t\t\t\t     1) Behavior of human beings\n");
                printf("\t\t\t\t     2) Insects\n");
                printf("\t\t\t\t     3) Decomposition\n");
                printf("\t\t\t\t     4) The formation of rocks\n");
                printf("\n\t\t\t\t   Enter correct option number: ");
                scanf("%d",&ia);
                break;
               }
        case 3:{
                c=2;
                printf("\t Eritrea, which became the 182nd member of the UN in 1993, is in the continent of ________\n\n\n");
                printf("\t\t\t\t     1) Asia\n");
                printf("\t\t\t\t     2) Africa\n");
                printf("\t\t\t\t     3) Europe\n");
                printf("\t\t\t\t     4) Australia\n");
                printf("\n\t\t\t\t   Enter correct option number: ");
                scanf("%d",&ia);
                break;
               }
        case 4:{
                c=2;
                printf("\t\t\t     Garampani sanctuary is located at ________\n\n\n");
                printf("\t\t\t\t     1) Junagarh, Gujarat\n");
                printf("\t\t\t\t     2) Diphu, Assam\n");
                printf("\t\t\t\t     3) Kohima, Nagaland\n");
                printf("\t\t\t\t     4) Gangtok, Sikkim\n");
                printf("\n\t\t\t\t   Enter correct option number: ");
                scanf("%d",&ia);
                break;
               }
        case 5:{
                c=4;
                printf("\t\t    For which of the following disciplines is Nobel Prize awarded?\n\n\n");
                printf("\t\t\t\t     1) Physics and Chemistry\n");
                printf("\t\t\t\t     2) Physiology or Medicine\n");
                printf("\t\t\t\t     3) Literature, Peace and Economics\n");
                printf("\t\t\t\t     4) All of the above\n");
                printf("\n\t\t\t\t   Enter correct option number: ");
                scanf("%d",&ia);
                break;
               }
        case 6:{
                c=2;
                printf("\t\t    Hitler party which came into power in 1933 is known as ________\n\n\n");
                printf("\t\t\t\t     1) Labour Party\n");
                printf("\t\t\t\t     2) Nazi Party\n");
                printf("\t\t\t\t     3) Ku-Klux-Klan\n");
                printf("\t\t\t\t     4) Democratic Party\n");
                printf("\n\t\t\t\t   Enter correct option number: ");
                scanf("%d",&ia);
                break;
               }
        case 7:{
                c=2;
                printf("\t\t\t\t    FFC stands for ________\n\n\n");
                printf("\t\t\t\t     1) Foreign Finance Corporation\n");
                printf("\t\t\t\t     2) Film Finance Corporation\n");
                printf("\t\t\t\t     3) Federation of Football Council\n");
                printf("\t\t\t\t     4) None of the above\n");
                printf("\n\t\t\t\t   Enter correct option number: ");
                scanf("%d",&ia);
                break;
               }
        case 8:{
                c=1;
                printf("\t\t\t      Fastest shorthand writer was ________\n\n\n");
                printf("\t\t\t\t     1) Dr. G. D. Bist\n");
                printf("\t\t\t\t     2) J.R.D. Tata\n");
                printf("\t\t\t\t     3) J.M. Tagore\n");
                printf("\t\t\t\t     4) Khudada Khan\n");
                printf("\n\t\t\t\t   Enter correct option number: ");
                scanf("%d",&ia);
                break;
               }
        case 9:{
                c=1;
                printf("\t    First human heart transplant operation conducted by Dr. Christiaan Barnard on\n\t\t\t     Louis Washkansky, was conducted in ________\n\n\n");
                printf("\t\t\t\t     1) 1967\n");
                printf("\t\t\t\t     2) 1968\n");
                printf("\t\t\t\t     3) 1958\n");
                printf("\t\t\t\t     4) 1922\n");
                printf("\n\t\t\t\t   Enter correct option number: ");
                scanf("%d",&ia);
                break;
               }
        case 10:{
                c=1;
                printf("\t\t\t      What is the name of this song https://www.youtube.com/watch?v=dQw4w9WgXcQ \n\n\n");
                printf("\t\t\t\t     1) Never\n");
                printf("\t\t\t\t     2) Gonna\n");
                printf("\t\t\t\t     3) Give\n");
                printf("\t\t\t\t     4) You up\n");
                printf("\n\t\t\t\t   Enter correct option number: ");
                scanf("%d",&ia);
                break;
               }
        default:printf("Invalid Input\n\n\n");
      }
      if(ia==c)
      {
        corr++;
        printf("\n\t\t\t\t\t CORRECT ANSWER :)");
        getchar();
        scanf("%c",&inp);
      }
      else if(ia==1||ia==2||ia==3||ia==4)
      {
        wrong++;
        printf("\n\t\t\t\t\t  WRONG ANSWER :(");
        getchar();
        scanf("%c",&inp);
      }
      else
      {
        printf("\n\t\t\t\t  Invalid Option, please try again");
        getchar();
        scanf("%c",&inp);
        system("clear");
        goto test;
      }
    }
    system("clear");
    printf("\n\n\t\t\t        ~~~~~Topic: General Knowledge~~~~~");
    printf("\n\n\n\t\t\t\t\tCorrect Answers:%d\n\t\t\t\t\t Wrong Answers:%d\n",corr,wrong);
    restart();
}

void topic1()
{
    char inp;
    int count=0,r=0,i,c,ia,corr=0,wrong=0;
    rando();
    for(i=0;i<10;i++)
    {
      system("clear");
      count++;
      test:
      printf("\n\n\t\t\t\t      ~~~~~Question %d~~~~~\n",count);
      printf("\n\t\t\t    Correct Answers=%d        Wrong Answers=%d\n\n\n\n",corr,wrong);
      r=a[i];
      switch(r)
      {
        case 1:{
                c=1;
                printf("\t\t\t     How do you do a Naruto run?\n\n\n");
                printf("\t\t\t\t     1) Put your head forwards and arms back\n");
                printf("\t\t\t\t     2) Put your left foot in, your left foot out\n");
                printf("\t\t\t\t     3) You do the hokey cokey and you turn around\n");
                printf("\t\t\t\t     4) That's what it's all about\n");
                printf("\n\t\t\t\t   Enter correct option number: ");
                scanf("           %d",&ia);
                break;
               }
        case 2:{
                c=3;
                printf("\t\t\t    What kind of wizard is Lucy in Fairy Tail anime?\n\n\n");
                printf("\t\t\t\t     1) Ice Wizard\n");
                printf("\t\t\t\t     2) Sky Wizard\n");
                printf("\t\t\t\t     3) Celestial Wizard\n");
                printf("\t\t\t\t     4) Fire Wizard\n");
                printf("\n\t\t\t\t   Enter correct option number: ");
                scanf("          %d",&ia);
                break;
               }
        case 3:{
                c=4;
                printf("\t\t    Which of the following characters does the Gum-Gum Pistol attack belong to?\n\n\n");
                printf("\t\t\t\t     1) Black Butler\n");
                printf("\t\t\t\t     2) Chobits\n");
                printf("\t\t\t\t     3) Titan\n");
                printf("\t\t\t\t     4) Monkey D. Luffy\n");
                printf("\n\t\t\t\t   Enter correct option number: ");
                scanf("          %d",&ia);
                break;
               }
        case 4:{
                c=1;
                printf("\t\t\t    Do you know what kind of person Naruto is?\n\n\n");
                printf("\t\t\t\t     1) A Ninja\n");
                printf("\t\t\t\t     2) A knight\n");
                printf("\t\t\t\t     3) A samurai\n");
                printf("\t\t\t\t     4) A tree surgeon\n");
                printf("\n\t\t\t\t   Enter correct option number: ");
                scanf("          %d",&ia);
                break;
               }
        case 5:{
                c=1;
                printf("\t\t      Who is the Pokemon Animes main character?\n\n\n");
                printf("\t\t\t\t     1) Ash\n");
                printf("\t\t\t\t     2) Misty\n");
                printf("\t\t\t\t     3) Pikachu\n");
                printf("\t\t\t\t     4) Light\n");
                printf("\n\t\t\t\t   Enter correct option number: ");
                scanf("          %d",&ia);
                break;
               }
        case 6:{
                c=2;
                printf("\t\t     A girl searches for magical objects to fulfill her wish, which is the anime?\n\n\n");
                printf("\t\t\t\t     1) One Piece\n");
                printf("\t\t\t\t     2) Dragon Ball\n");
                printf("\t\t\t\t     3) Fairy tail\n");
                printf("\t\t\t\t     4) Naruto\n");
                printf("\n\t\t\t\t   Enter correct option number: ");
                scanf("          %d",&ia);
                break;
               }
        case 7:{
                c=3;
                printf("\t\t\t    Light Yagami is the main character of which anime?\n\n\n");
                printf("\t\t\t\t     1) One piece\n");
                printf("\t\t\t\t     2) Fairy Tail\n");
                printf("\t\t\t\t     3) Death Note\n");
                printf("\t\t\t\t     4) Dragon Balls\n");
                printf("\n\t\t\t\t   Enter correct option number: ");
                scanf("          %d",&ia);
                break;
               }
        case 8:{
                c=3;
                printf("\t\t\t     What do you have to do with Pokemon?\n\n\n");
                printf("\t\t\t\t     1) Snatch em all!\n");
                printf("\t\t\t\t     2) Fetch em all!\n");
                printf("\t\t\t\t     3) Catch em all!\n");
                printf("\t\t\t\t     4) None of the above\n");
                printf("\n\t\t\t\t   Enter correct option number: ");
                scanf("          %d",&ia);
                break;
               }
        case 9:{
                c=1;
                printf("\t     Which genre is known for getting transported into another world?\n\n\n");
                printf("\t\t\t\t     1) Isekai\n");
                printf("\t\t\t\t     2) Rom-Com\n");
                printf("\t\t\t\t     3) Action\n");
                printf("\t\t\t\t     4) Sci-fi\n");
                printf("\n\t\t\t\t   Enter correct option number: ");
                scanf("          %d",&ia);
                break;
               }
        case 10:{
                c=4;
                printf("\t\t\t   Which of these ISN'T a type of pokemon?\n\n\n");
                printf("\t\t\t\t     1) Water\n");
                printf("\t\t\t\t     2) Fire\n");
                printf("\t\t\t\t     3) Grass\n");
                printf("\t\t\t\t     4) Rubber\n");
                printf("\n\t\t\t\t   Enter correct option number: ");
                scanf("          %d",&ia);
                break;
               }
        default:printf("          Invalid Input\n\n\n");
      }
      if(ia==c)
      {
        corr++;
        printf("\n\t\t\t\t\t CORRECT ANSWER :)");
        getchar();
        scanf("%c",&inp);
      }
      else if(ia==1||ia==2||ia==3||ia==4)
      {
        wrong++;
        printf("\n\t\t\t\t\t  WRONG ANSWER :(");
        getchar();
        scanf("%c",&inp);
      }
      else
      {
        printf("\n\t\t\t\t  Invalid Option, please try again");
        getchar();
        scanf("%c",&inp);
        system("clear");
        goto test;
      }
    }
    system("clear");
    printf("\n\n\t\t\t\t     ~~~~~Topic: Science~~~~~");
    printf("\n\n\n\t\t\t\t\tCorrect Answers:%d\n\t\t\t\t\t Wrong Answers:%d\n",corr,wrong);
    restart();
}

void topic2() //Topic name is Technoogy UI done
{
    char inp;
    int count=0,r=0,i,c,ia,corr=0,wrong=0;
    rando();
    for(i=0;i<10;i++)
    {
      system("clear");
      count++;
      test:
      printf("\n\n\t\t\t\t      ~~~~~Question %d~~~~~\n",count);
      printf("\n\t\t\t    Correct Answers=%d        Wrong Answers=%d\n\n\n\n",corr,wrong);
      r=a[i];
      switch(r)
      {
        case 1:{
                c=2;
                printf("\t\tWhat is part of a database that holds only one type of information?\n\n\n");
                printf("\t\t\t\t     1) Report\n");
                printf("\t\t\t\t     2) Field\n");
                printf("\t\t\t\t     3) Record\n");
                printf("\t\t\t\t     4) File\n");
                printf("\n\t\t\t\t   Enter correct option number: ");
                scanf("           %d",&ia);
                break;
               }
        case 2:{
                c=4;
                printf("\t\tIn which decade with the first transatlantic radio broadcast occur?\n\n\n");
                printf("\t\t\t\t     1) 1850s\n");
                printf("\t\t\t\t     2) 1860s\n");
                printf("\t\t\t\t     3) 1870s\n");
                printf("\t\t\t\t     4) 1900s\n");
                printf("\n\t\t\t\t   Enter correct option number: ");
                scanf("          %d",&ia);
                break;
               }
        case 3:{
                c=2;
                printf("\t\t       '.MOV' extension refers usually to what kind of file?\n\n\n");
                printf("\t\t\t\t     1) Image file\n");
                printf("\t\t\t\t     2) Animation/movie file\n");
                printf("\t\t\t\t     3) Audio file\n");
                printf("\t\t\t\t     4) MS Office document\n");
                printf("\n\t\t\t\t   Enter correct option number: ");
                scanf("          %d",&ia);
                break;
               }
        case 4:{
                c=2;
                printf("\t\t\t\t     Who developed Yahoo?\n\n\n");
                printf("\t\t\t\t     1) Dennis Ritchie & Ken Thompson\n");
                printf("\t\t\t\t     2) David Filo & Jerry Yang\n");
                printf("\t\t\t\t     3) Vint Cerf & Robert Kahn\n");
                printf("\t\t\t\t     4) Steve Case & Jeff Bezos\n");
                printf("\n\t\t\t\t   Enter correct option number: ");
                scanf("          %d",&ia);
                break;
               }
        case 5:{
                c=2;
                printf("\t\t    Which of the following is an example of non volatile memory?\n\n\n");
                printf("\t\t\t\t     1) VLSI\n");
                printf("\t\t\t\t     2) ROM\n");
                printf("\t\t\t\t     3) RAM\n");
                printf("\t\t\t\t     4) LSI\n");
                printf("\n\t\t\t\t   Enter correct option number: ");
                scanf("          %d",&ia);
                break;
               }
        case 6:{
                c=4;
                printf("\t\t\t\t   What does VVVF stand for?\n\n\n");
                printf("\t\t\t\t     1) Variant Voltage Vile Frequency\n");
                printf("\t\t\t\t     2) Variable Velocity Variable Fun\n");
                printf("\t\t\t\t     3) Very Very Vicious Frequency\n");
                printf("\t\t\t\t     4) Variable Voltage Variable Frequency\n");
                printf("\n\t\t\t\t   Enter correct option number: ");
                scanf("          %d",&ia);
                break;
               }
        case 7:{
                c=1;
                printf("\t\t     Who built the world's first binary digit computer: Z1...?\n\n\n");
                printf("\t\t\t\t     1) Konrad Zuse\n");
                printf("\t\t\t\t     2) Ken Thompson\n");
                printf("\t\t\t\t     3) Alan Turing\n");
                printf("\t\t\t\t     4) George Boole\n");
                printf("\n\t\t\t\t   Enter correct option number: ");
                scanf("          %d",&ia);
                break;
               }
        case 8:{
                c=3;
                printf("\t\tIn a color television set using a picture tube a high voltage is \n          used to accelerate electron beams to light the screen. That voltage is about ________\n\n\n");
                printf("\t\t\t\t     1) 500 volts\n");
                printf("\t\t\t\t     2) 5 thousand volts\n");
                printf("\t\t\t\t     3) 25 thousand volts\n");
                printf("\t\t\t\t     4) 100 thousand volts\n");
                printf("\n\t\t\t\t   Enter correct option number: ");
                scanf("          %d",&ia);
                break;
               }
        case 9:{
                c=2;
                printf("\t  Which consists of two plates separated by a dielectric and can store a charge?\n\n\n");
                printf("\t\t\t\t     1) Inductor\n");
                printf("\t\t\t\t     2) Capacitor\n");
                printf("\t\t\t\t     3) Relay\n");
                printf("\t\t\t\t     4) Transistor\n");
                printf("\n\t\t\t\t   Enter correct option number: ");
                scanf("          %d",&ia);
                break;
               }
        case 10:{
                c=1;
                printf("\t\tCompact discs, (according to the original CD specifications) hold \n\t\t\t\t   how many minutes of music?\n\n\n");
                printf("\t\t\t\t     1) 74 mins\n");
                printf("\t\t\t\t     2) 56 mins\n");
                printf("\t\t\t\t     3) 60 mins\n");
                printf("\t\t\t\t     4) 90 mins\n");
                printf("\n\t\t\t\t   Enter correct option number: ");
                scanf("          %d",&ia);
                break;
               }
        default:printf("          Invalid Input\n\n\n");
      }
      if(ia==c)
      {
        corr++;
        printf("\n\t\t\t\t\t CORRECT ANSWER :)");
        getchar();
        scanf("%c",&inp);
      }
      else if(ia==1||ia==2||ia==3||ia==4)
      {
        wrong++;
        printf("\n\t\t\t\t\t  WRONG ANSWER :(");
        getchar();
        scanf("%c",&inp);
      }
      else
      {
        printf("\n\t\t\t\t  Invalid Option, please try again");
        getchar();
        scanf("%c",&inp);
        system("clear");
        goto test;
      }
    }
    system("clear");
    printf("\n\n\t\t\t\t   ~~~~~Topic: Technology~~~~~");
    printf("\n\n\n\t\t\t\t\tCorrect Answers:%d\n\t\t\t\t\t Wrong Answers:%d\n",corr,wrong);
    restart();
}
