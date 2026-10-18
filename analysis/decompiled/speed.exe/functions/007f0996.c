/* speed.exe 007f0996 FUN_007f0996; analysis pseudocode, not buildable source.
 * calls 007c5f80 _tolower
 */

int __fastcall FUN_007f0996(char *param_1)

{
  char *in_EAX;
  int iVar1;
  int iVar2;
  
  while( true ) {
    iVar1 = _tolower((int)*param_1);
    iVar2 = _tolower((int)*in_EAX);
    if ((iVar1 - iVar2 != 0) || (*param_1 == '\0')) break;
    in_EAX = in_EAX + 1;
    param_1 = param_1 + 1;
  }
  return iVar1 - iVar2;
}

