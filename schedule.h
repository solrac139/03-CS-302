using namespace std;

class schedule{
private:
//list of holidays (datatype)
//list of magicians (strings)
public:
//schedule
  //inputs:a customer, a magician
  //outputs:pair the customer with a magician and add 
  //        them to the requested holiday. If there are no open magicians,
  //        add the customer to the waiting list for the holiday
//cancel
  //inputs:a customer, a holiday
  //outputs:delete the booking of a magician for the listed holiday
  //        pop a customer into the booking if there is a waiting list
//signup
  //inputs:a magician
  //outputs:adds a magician to the list of magicians
  //        if there are waiting lists, pop them and add the magician
  //        into a booking with them
//dropout
  //inputs:a magician
  //outputs:removes a magician from the list of magicians
  //        removes magicians from any related holidays
  //        pairs the homeless customers with new magicians
  //        move customers to the waiting list is there are no more bookings
//status
  //inputs: a magician or a holiday(overloaded)
  //output: displays the info status for a magician or holiday
//read in magician list
  //inputs: a string with the file name with magician names
  //outputs: magician list read in
}
