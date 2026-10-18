/* speed.exe 00536310 FUN_00536310; analysis pseudocode, not buildable source.
 * calls 00598a30 FUN_00598a30
 * calls 0056bc10 FUN_0056bc10
 * calls 007a2910 FUN_007a2910
 * calls 0079bac0 FUN_0079bac0
 * calls 0056e300 FUN_0056e300
 * calls 0079c470 FUN_0079c470
 */

undefined4 __fastcall FUN_00536310(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  
  if (*(int *)(DAT_0091cf90 + 0x19c) == 2) {
    if ((*(uint *)(DAT_0091cf90 + 300) >> 6 & 1) != 0) {
      *(undefined1 *)(DAT_0091cf90 + 0x141) = 0;
    }
    FUN_007a2910(0);
    puVar5 = &LAB_00522210;
    puVar4 = &DAT_0091cbe0;
    iVar1 = param_1;
    FUN_0079bac0(&DAT_0091cbe0,&LAB_00522210,param_1);
    iVar1 = FUN_0079c470(puVar4,puVar5,iVar1);
    if (-1 < iVar1) {
      FUN_0056e300(3);
      uVar3 = *(undefined4 *)(param_1 + 0x10);
      uVar2 = FUN_0056bc10(0x65fda335);
      uVar3 = FUN_00598a30(uVar3,&DAT_00890978,1,0x1a294dad,0xca4ce1,uVar2);
      *(undefined4 *)(param_1 + 0x1a0) = uVar3;
      return 0;
    }
  }
  return 0xffffffff;
}

