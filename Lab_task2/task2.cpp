#include <bits/stdc++.h>
using namespace std;

void decryptString(string S, int N)
{

	string plaintext[5];

	int freq[26] = { 0 };

	int freqSorted[26];

	int Used[26] = { 0 };

	for (int i = 0; i < N; i++) {
		if (S[i] != ' ') {
			freq[S[i] - 'a']++;
		}
	}

	for (int i = 0; i < 26; i++) {
		freqSorted[i] = freq[i];
	}

	string T = "etaoinshrdlcUumwfgypbvkjxqz";


	sort(freqSorted, freqSorted + 26, greater<int>());

	for (int i = 0; i < 5; i++) {

		int ch = -1;

		for (int j = 0; j < 26; j++) {

			if (freqSorted[i] == freq[j] && Used[j] == 0) {
				Used[j] = 1;
				ch = j;
				break;
			}
		}
		if (ch == -1)
			break;

	
		int x = T[i] - 'a';

	
		x = x - ch;

	
		string curr = "";

	
		for (int k = 0; k < N; k++) {

			
			if (S[k] == ' ') {
				curr += ' ';
				continue;
			}

			
			int y = S[k] - 'a';
			y += x;

			if (y < 0)
				y += 26;
			if (y > 25)
				y -= 26;

			
			curr += 'a' + y;
		}

		plaintext[i] = curr;
	}


	for (int i = 0; i < 5; i++) {
		cout << plaintext[i] << endl;
	}
}

// Driver Code
int main()
{
	// Given string
	string S = "af p xpkcaqvnpk pfg, af ipqe qpri, gauuikifc tpw, ceiri udvk tiki afgarxifrphni cd eaowvmd popkwn, hiqpvri du ear jvaql vfgikrcpfgafm du cei xkafqaxnir du xrwqedearcdkw pfgdu ear aopmafpcasi xkdhafmr afcd fit pkipr. ac tpr qdoudkcafm cd lfdt cepc au pfwceafmepxxifig cd ringdf eaorinu hiudki cei opceiopcaqr du cei uaing qdvng hi qdoxnicinw tdklig dvc-pfg edt rndtnw ac xkdqiigig, pfg edt odvfcpafdvr cei dhrcpqnir--ceiki tdvng pc niprc kiopaf dfimddg oafg cepc tdvng qdfcafvi cei kiripkqe";
    int N = S.length();

    string S1 = "aceah toz puvg vcdl omj puvg yudqecov, omj loj auum klu thmjuv hs klu zlcvu shvzcbkg guovz, upuv zcmdu lcz vuwovroaeu jczoyyuovomdu omj qmubyudkuj vukqvm. klu vcdluz lu loj avhqnlk aodr svhw lcz kvopuez loj mht audhwu o ehdoe eunumj, omj ck toz yhyqeoveg auecupuecryptString(S1, N);j, tlokupuv klu hej sher wcnlk zog, klok klu lcee ok aon umj toz sqee hs kqmmuez zkqssuj tckl kvuozqvu. omj cs klok toz mhk umhqnl shv sowu, kluvu toz oezh lcz yvhehmnuj pcnhqv kh wovpue ok. kcwu thvu hm, aqk ck zuuwuj kh lopu eckkeu ussudk hmwv. aonncmz. ok mcmukg lu toz wqdl klu zowu oz ok scskg. ok mcmukg-mcmu klug aunom kh doee lcw tuee-yvuzuvpuj; aqk qmdlomnuj thqej lopu auum muovuv klu wovr. kluvu tuvu zhwu klok zlhhr klucv luojz omj klhqnlk klcz toz khh wqdl hs o nhhj klcmn; ck zuuwuj qmsocv klok omghmu zlhqej yhzzuzz (oyyovumkeg) yuvyukqoe ghqkl oz tuee oz (vuyqkujeg) cmubloqzkcaeu tuoekl. ck tcee lopu kh au yocj shv, klug zocj. ck czm'k mokqvoe, omj kvhqaeu tcee dhwu hs ck! aqk zh sov kvhqaeu loj mhk dhwu; omj oz wv. aonncmz toz numuvhqz tckl lcz whmug, whzk yuhyeu tuvu tceecmn kh shvncpu lcw lcz hjjckcuz omj lcz nhhj shvkqmu. lu vuwocmuj hm pczckcmn kuvwz tckl lcz vueokcpuz (ubduyk, hs dhqvzu, klu zodrpceeuaonncmzuz), omj lu loj womg juphkuj ojwcvuvz owhmn klu lhaackz hs yhhv omj qmcwyhvkomk sowcecuz. aqk lu loj mh dehzu svcumjz, qmkce zhwu hs lcz ghqmnuv dhqzcmz aunom kh nvht qy. klu uejuzk hs kluzu, omj aceah'z sophqvcku, toz ghqmn svhjh aonncmz. tlum aceah toz mcmukg-mcmu lu ojhykuj svhjh oz lcz lucv, omj avhqnlk lcw kh ecpu ok aon umj; omj klulhyuz hs klu zodrpceeu- aonncmzuz tuvu scmoeeg jozluj. aceah omj svhjh loyyumuj kh lopu klu zowu acvkljog, zuykuwauv 22mj. ghq loj aukkuv dhwu omj ecpu luvu, svhjh wg eoj, zocj aceah hmu jog; omj klum tu dom dueuavoku hqv acvkljog-yovkcuz dhwshvkoaeg khnukluv. ok klok kcwu svhjh toz zkcee cm lcz ktuumz, oz klu lhaackz doeeuj klu cvvuzyhmzcaeu ktumkcuz auktuum dlcejlhhj omj dhwcmn hs onu ok klcvkg-klvuu";
	// Function Call
    cout<<"Cipher 1" <<endl<<endl;
	decryptString(S,N);
	N = S1.length();

	cout<<"Cipher 2"<<endl<<endl;
	decryptString(S1, N);
	
}
