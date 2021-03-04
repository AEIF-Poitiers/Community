import java.util.ArrayList;


/**
 * @author Vincent COMMIN 
 * 
 * Ce code est destiné à l'évènement "badcode" de l'AEIF du 12/03/2021. 
 * Il utilise les arguments pour pouvoir marcher (il en faut 2).
 * - 1er argument : la phrase
 * - 2e argument : le mot à chercher dans la phrase
 * 
 * Pour le lancer sous Linux : assurez-vous d'avoir javac et java d'installé
 * Il vous suffit ensuite d'exécuter les commandes suivantes :
 * > javac Main.java
 * > java Main "la phrase avec des mots" "leMotAChercher"
 * 
 * Pour le lancer sous Windows :
 * Il vous faut bien sur java.
 * Vous pouvez soit le lancer comme pour Linux en ligne de commande,
 * soit il vous faut changer dans la ligne :
 * Sentence sent = new Main().new Sentence(args[0], args[1]);
 * args[0] et args[1] par respectivement "la phrase avec des mots" et "leMotAChercher"
 * Le programme prend en compte la casse :
 * bienvenue -> nom commun mais qui est aussi un nom propre -> Bienvenue
 */
public class Vincent_JAVA_HORROR
{
    public class Sentence
    {
        public ArrayList<ArrayList<Letter>> words;
        public ArrayList<Letter> wordToSearch;

        public Sentence(String sentence, String wordArg)
        {
            words = new ArrayList<ArrayList<Letter>>();
            wordToSearch = new ArrayList<Letter>();

            int word = 0;
            words.add(new ArrayList<Letter>());
            for(int i = 0; i < sentence.length(); i++)
            {
                //System.out.println(sentence.charAt(i));
                if(!isLetter(sentence.charAt(i)))
                {
                    word++;
                    words.add(new ArrayList<Letter>());
                }
                else
                {
                    words.get(word).add(new Letter(sentence.charAt(i)));
                }
            }

            for(int i = 0; i < wordArg.length(); i++)
            {
                if(isLetter(wordArg.charAt(i)))
                {
                    wordToSearch.add(new Letter(wordArg.charAt(i)));
                }
            } 
        }

        public boolean compareWords(ArrayList<Letter> w1, ArrayList<Letter> w2)
        {
            if(w1.size() == w2.size())
            {
                for(int i = 0; i < w1.size(); i++)
                {
                    if(!w1.get(i).isSameLetter(w2.get(i)))
                        return false;
                }
                
                return true;
            }
            else
            {
                return false;
            }
        }

        public void printSentence()
        {
            for(int i = 0; i < words.size(); i++)
            {
                for(int j = 0; j < words.get(i).size(); j++)
                {
                    System.out.print(words.get(i).get(j).c);
                }
                System.out.print(" ");
            }
        }

        public boolean isWordInSentence()
        {
            for(int i = 0; i < words.size(); i++)
            {
                if(compareWords(words.get(i), wordToSearch))
                    return true;
            }

            return false;
        }

        public boolean isLetter(char c)
        {
            switch(c)
            {
                case 'a' :
                case 'b' :
                case 'c' :
                case 'd' :
                case 'e' :
                case 'f' :
                case 'g' :
                case 'i' :
                case 'j' :
                case 'k' :
                case 'l' :
                case 'm' :
                case 'n' :
                case 'o' :
                case 'p' :
                case 'q' :
                case 'r' :
                case 's' :
                case 't' :
                case 'u' :
                case 'v' :
                case 'w' :
                case 'x' :
                case 'y' :
                case 'z' :
                case 'A' :
                case 'B' :
                case 'C' :
                case 'D' :
                case 'E' :
                case 'F' :
                case 'G' :
                case 'H' :
                case 'I' :
                case 'J' :
                case 'K' :
                case 'L' :
                case 'M' :
                case 'N' :
                case 'O' :
                case 'P' :
                case 'Q' :
                case 'R' :
                case 'S' :
                case 'T' :
                case 'U' :
                case 'V' :
                case 'W' :
                case 'X' :
                case 'Y' :
                case 'Z' :
                    return true;
            }

            return false;
        }
    }
    
    public class Letter
    {
        public char c;

        public Letter(char c)
        {
            this.c = c;
        }

        public boolean isSameLetter(Letter letter)
        {
            return c == letter.c;
        }        
    }    
    
    public static void main(String args[])
    {
        Sentence sent = new Vincent_JAVA_HORROR().new Sentence(args[0], args[1]);
        System.out.println(sent.isWordInSentence());
    }
}
