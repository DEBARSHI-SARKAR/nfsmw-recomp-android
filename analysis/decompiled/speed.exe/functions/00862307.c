/* speed.exe 00862307 FUN_00862307; analysis pseudocode, not buildable source.
 * calls 00862254 FUN_00862254
 */

void FUN_00862307(void)

{
  uint *in_EAX;
  
  if ((in_EAX[4] != 0) && (1 < in_EAX[5])) {
    (**(code **)(*DAT_009076dc + 4))(in_EAX[5],0);
  }
  *in_EAX = *in_EAX & 0xff;
  in_EAX[7] = 0;
  FUN_00862254();
  return;
}

