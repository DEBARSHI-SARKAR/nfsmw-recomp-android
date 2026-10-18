/* speed.exe 0083a0f0 FUN_0083a0f0; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_0083a0f0(int param_1)

{
  byte bVar1;
  byte *in_EAX;
  int *unaff_ESI;
  
  if (param_1 < 1) {
    param_1 = 0x100;
  }
  *unaff_ESI = 0;
  bVar1 = *in_EAX;
  for (; (('/' < (char)bVar1 && ((char)bVar1 < ':')) && (0 < param_1)); param_1 = param_1 + -1) {
    in_EAX = in_EAX + 1;
    *unaff_ESI = (bVar1 & 0xf) + *unaff_ESI * 10;
    bVar1 = *in_EAX;
  }
  return;
}

