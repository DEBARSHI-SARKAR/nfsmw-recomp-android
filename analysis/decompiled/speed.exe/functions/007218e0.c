/* speed.exe 007218e0 FUN_007218e0; analysis pseudocode, not buildable source.
 */

undefined4 FUN_007218e0(int param_1)

{
  char cVar1;
  
  cVar1 = (char)(param_1 / 100);
  if ((cVar1 != '\x19') && (cVar1 != '\x17')) {
    return 0;
  }
  return 1;
}

