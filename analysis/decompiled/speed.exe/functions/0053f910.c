/* speed.exe 0053f910 FUN_0053f910; analysis pseudocode, not buildable source.
 * calls 005b8550 FUN_005b8550
 * calls 0053f560 FUN_0053f560
 * calls 0056bc10 FUN_0056bc10
 * calls 00516af0 FUN_00516af0
 * calls 005b1360 FUN_005b1360
 * calls 00598970 FUN_00598970
 * calls 00837720 FUN_00837720
 * calls 005b8400 FUN_005b8400
 * calls 00513b50 FUN_00513b50
 * calls 0078c730 FUN_0078c730
 */

void __thiscall FUN_0053f910(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_0053f560(0);
  if (param_3 == 0) {
    if ((((*(int *)(param_1 + 0x10) != 0) &&
         (iVar2 = FUN_00516af0(*(int *)(param_1 + 0x10)), iVar2 != 0)) &&
        (iVar2 = FUN_005b8550(0x47ff4e7c), iVar2 != 0)) &&
       (iVar2 = FUN_005b1360(0xde6eff34), iVar2 != 0)) {
      FUN_005b8400(iVar2,0);
      *(undefined4 *)(iVar2 + 0x10) = 0;
    }
    DAT_0091ca90 = 1;
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    uVar3 = FUN_0056bc10(0x84706d98,&DAT_0091c39c);
    FUN_00598970(uVar1,&DAT_00890978,1,0x417b2601,0xffffffff,0xffffffff,uVar3);
  }
  else if ((*(char *)(param_1 + 0xf6) == '\0') || (param_3 != -0x6c)) {
    FUN_00513b50(*(undefined4 *)(param_1 + 0x10),param_3);
  }
  iVar2 = FUN_0078c730();
  FUN_00837720(*(undefined4 *)(iVar2 + 0xf8),&DAT_0091c39c,1);
  return;
}

