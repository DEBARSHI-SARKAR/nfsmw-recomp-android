/* speed.exe 005343b0 FUN_005343b0; analysis pseudocode, not buildable source.
 * calls 00598970 FUN_00598970
 * calls 00516be0 FUN_00516be0
 * calls 00514cc0 FUN_00514cc0
 * calls 0056bc10 FUN_0056bc10
 * calls 005b8550 FUN_005b8550
 * calls 0056e3c0 FUN_0056e3c0
 * calls 0056c6e0 FUN_0056c6e0
 * calls 00516af0 FUN_00516af0
 */

void FUN_005343b0(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_0056c6e0(*(undefined4 *)(param_2 + 0x124));
  *(undefined4 *)(param_2 + 0x124) = 0;
  if (*(int *)(param_1 + 0xc) == 0) {
    if (*(int *)(param_2 + 0x10) != 0) {
      iVar2 = FUN_00516af0(*(int *)(param_2 + 0x10));
      if (iVar2 != 0) {
        iVar2 = FUN_005b8550(0x43578dea);
        if (iVar2 != 0) {
          FUN_00514cc0(iVar2);
        }
      }
    }
  }
  else {
    FUN_0056e3c0(&DAT_00890978);
    iVar2 = *(int *)(param_1 + 0xc);
    uVar1 = *(undefined4 *)(param_2 + 0x10);
    if (iVar2 == 0x6475706c) {
      uVar3 = 0x5498e449;
    }
    else if (iVar2 == 0x66696c74) {
      uVar3 = 0x346ca432;
    }
    else if (iVar2 == 0x69706572) {
      uVar3 = 0xe16c24e3;
    }
    else {
      if ((iVar2 != 0x6d617870) && (iVar2 == 0x696e616d)) {
        uVar3 = FUN_0056bc10(0x4904cdde,3,0xc);
        FUN_00598970(uVar1,&DAT_00890978,1,0x417b2601,0xffffffff,0xffffffff,uVar3);
        goto LAB_005344b5;
      }
      uVar3 = 0x39b57034;
    }
    uVar3 = FUN_0056bc10(uVar3);
    FUN_00598970(uVar1,&DAT_00890978,1,0x417b2601,0xffffffff,0xffffffff,uVar3);
  }
LAB_005344b5:
  FUN_00516be0(0xaf0bbd92,*(undefined4 *)(param_2 + 0x10),0xffffffff,0xff);
  return;
}

