/* speed.exe 006064c0 FUN_006064c0; analysis pseudocode, not buildable source.
 */

undefined4 __fastcall FUN_006064c0(int param_1)

{
  int in_EAX;
  
  if (((int)(uint)*(byte *)(param_1 + 0x47) <= in_EAX) &&
     ((in_EAX < 0xfa || (*(int *)(param_1 + 0x28) <= in_EAX + -0xfa)))) {
    return 0;
  }
  return 1;
}

