/* speed.exe 00518570 FUN_00518570; analysis pseudocode, not buildable source.
 * calls 005b7780 FUN_005b7780
 * calls 00598a60 FUN_00598a60
 * calls 0056d7c0 FUN_0056d7c0
 */

void __fastcall FUN_00518570(int param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0x1d) = 0;
  if (*(char *)(param_1 + 0x1c) != '\0') {
    if (*DAT_0091cadc != -0xd8) {
      for (iVar1 = *(int *)(*DAT_0091cadc + 0xe0); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
        FUN_005b7780(0x7e998e5e,0,iVar1,0xffffffff,0);
      }
    }
    FUN_00598a60(&DAT_00890978,&DAT_00890978,2,0x417b2601,0x34dc1bec,0xc5e2beac);
  }
  FUN_0056d7c0(*(undefined1 *)(param_1 + 0x1c));
  return;
}

