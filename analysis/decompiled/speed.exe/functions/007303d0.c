/* speed.exe 007303d0 FUN_007303d0; analysis pseudocode, not buildable source.
 * calls 006626b0 FUN_006626b0
 * calls 0065c770 FUN_0065c770
 * calls 0072fd70 FUN_0072fd70
 */

undefined4 __fastcall FUN_007303d0(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if ((*(int *)(param_1 + 0x188) == 0) &&
     (*(int *)(param_1 + 0x2c0) <= *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x24))) {
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  bVar2 = (char)iVar1 == '\0';
  if ((!bVar2) &&
     ((*(int *)(param_1 + 0x188) != 0 ||
      (iVar1 = *(int *)(param_1 + 0x2c0),
      *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x24) < iVar1)))) {
    while ((*(int *)(param_1 + 0x188) != 0 ||
           (iVar1 = *(int *)(param_1 + 0x2c0),
           *(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x24) < iVar1))) {
      FUN_006626b0();
      FUN_0065c770();
      FUN_0072fd70();
      FUN_0065c770();
    }
  }
  return CONCAT31((int3)((uint)iVar1 >> 8),bVar2);
}

