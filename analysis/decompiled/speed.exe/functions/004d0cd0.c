/* speed.exe 004d0cd0 FUN_004d0cd0; analysis pseudocode, not buildable source.
 * calls 004d0c40 FUN_004d0c40
 * calls 004cea30 FUN_004cea30
 */

void __thiscall FUN_004d0cd0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (DAT_00912078 == 0) {
    FUN_004d0c40();
    *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_1 + 0xb4);
    iVar1 = 0;
    do {
      FUN_004cea30(iVar1,(&DAT_00911ed4)[iVar1],(&DAT_00896364)[iVar1 * 2],
                   (&DAT_00896368)[iVar1 * 2],param_2);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 4);
  }
  return;
}

