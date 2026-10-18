/* speed.exe 00721910 FUN_00721910; analysis pseudocode, not buildable source.
 */

undefined4 FUN_00721910(int param_1)

{
  char cVar1;
  
  cVar1 = (char)(param_1 / 100);
  if ((cVar1 != '\x18') && (cVar1 != '\x15')) {
    return 0;
  }
  return 1;
}

