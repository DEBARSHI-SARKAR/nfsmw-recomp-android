/* speed.exe 007f8464 FUN_007f8464; analysis pseudocode, not buildable source.
 * calls 0081bcd9 FUN_0081bcd9
 * calls 0081cb91 FUN_0081cb91
 * calls 0081ccaa FUN_0081ccaa
 * calls 0081bccb FUN_0081bccb
 */

uint __fastcall FUN_007f8464(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 local_20 [8];
  int local_18;
  undefined1 local_10 [4];
  undefined4 local_c;
  
  FUN_0081bccb();
  iVar1 = FUN_0081ccaa(*(undefined4 *)(param_1 + 0xc),local_10);
  if (-1 < iVar1) {
    iVar1 = FUN_0081cb91(local_c,local_20);
    if (-1 < iVar1) {
      FUN_0081bcd9();
      return (uint)(local_18 == 0);
    }
  }
  uVar2 = FUN_0081bcd9();
  return uVar2 & 0xffffff00;
}

