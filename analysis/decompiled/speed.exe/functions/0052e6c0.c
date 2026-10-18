/* speed.exe 0052e6c0 FUN_0052e6c0; analysis pseudocode, not buildable source.
 * calls 00571e80 FUN_00571e80
 * calls 0056bc10 FUN_0056bc10
 * calls 005252d0 FUN_005252d0
 * calls 005a3c30 FUN_005a3c30
 */

void __thiscall FUN_0052e6c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = FUN_005a3c30(param_4,DAT_0091ca34);
  if (iVar3 == 0x10) {
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    uVar4 = FUN_0056bc10(0xf3799455);
    FUN_005252d0(uVar1,param_2,&DAT_008941f8,uVar4);
  }
  else {
    FUN_005252d0(*(undefined4 *)(param_1 + 0x10),param_2,&DAT_0089c2d0,iVar3);
  }
  cVar2 = FUN_00571e80(*(undefined4 *)(param_1 + 0x10));
  if ((char)param_4 == cVar2) {
    *(undefined4 *)(param_1 + 0x30) = param_3;
  }
  return;
}

