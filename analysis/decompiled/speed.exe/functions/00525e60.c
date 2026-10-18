/* speed.exe 00525e60 FUN_00525e60; analysis pseudocode, not buildable source.
 * calls 006dd1d0 FUN_006dd1d0
 * calls 004655f0 FUN_004655f0
 * calls 007283d0 FUN_007283d0
 * calls 00723a50 FUN_00723a50
 * calls 007f7f1e FUN_007f7f1e
 */

void __fastcall FUN_00525e60(int param_1)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *(int *)(param_1 + 0x140);
  if (iVar1 != 0) {
    FUN_007f7f1e();
    (*DAT_00909e58)(iVar1);
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  iVar1 = DAT_0091cb18;
  if (DAT_009ab208 != 0) {
    if (DAT_0091cb18 == 0) goto LAB_00525ed2;
    cVar2 = FUN_00723a50(DAT_0091cb18);
    if (cVar2 != '\0') {
      FUN_007283d0(iVar1);
      DAT_0091cb18 = 0;
      FUN_006dd1d0();
      return;
    }
  }
  FUN_004655f0(iVar1);
LAB_00525ed2:
  DAT_0091cb18 = 0;
  FUN_006dd1d0();
  return;
}

