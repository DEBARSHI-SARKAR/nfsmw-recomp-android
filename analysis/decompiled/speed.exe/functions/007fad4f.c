/* speed.exe 007fad4f FUN_007fad4f; analysis pseudocode, not buildable source.
 */

void __fastcall FUN_007fad4f(int param_1)

{
  undefined4 *in_EAX;
  int iVar1;
  
  iVar1 = 8;
  do {
    *in_EAX = DAT_00909fcc;
    in_EAX[1] = DAT_00909fcc;
    in_EAX[2] = DAT_00909fcc;
    in_EAX[3] = DAT_00909fcc;
    in_EAX[4] = DAT_00909fcc;
    in_EAX[5] = DAT_00909fcc;
    in_EAX[6] = DAT_00909fcc;
    in_EAX[7] = DAT_00909fcc;
    in_EAX = in_EAX + param_1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

