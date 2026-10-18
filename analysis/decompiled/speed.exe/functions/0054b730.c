/* speed.exe 0054b730 FUN_0054b730; analysis pseudocode, not buildable source.
 * calls 00794f80 FUN_00794f80
 * calls 007976f0 FUN_007976f0
 * calls 0056bc10 FUN_0056bc10
 * calls 00598970 FUN_00598970
 * calls 0078b800 FUN_0078b800
 * calls 00793170 FUN_00793170
 * calls 00799f50 FUN_00799f50
 * calls 0053d1d0 FUN_0053d1d0
 */

void __fastcall FUN_0054b730(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  
  FUN_00799f50();
  uVar1 = FUN_0078b800(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x274),
                       *(undefined4 *)(param_1 + 0x280));
  uVar4 = 1;
  pcVar3 = FUN_0053d6d0;
  *(undefined4 *)(param_1 + 0x278) = uVar1;
  FUN_00794f80(FUN_0053d6d0,1);
  FUN_00793170(pcVar3,uVar4);
  iVar2 = FUN_007976f0(*(undefined4 *)(param_1 + 0x278),FUN_0053d6d0,param_1);
  *(int *)(param_1 + 0x27c) = iVar2;
  if (iVar2 < 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    uVar4 = FUN_0056bc10(0x6cf6e689);
    FUN_00598970(uVar1,&DAT_00890978,1,0x417b2601,0x911ab364,0x911ab364,uVar4);
    return;
  }
  if (iVar2 == 0) {
    FUN_0053d1d0();
    *(undefined1 *)(DAT_0091cae0 + 1) = 1;
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar4 = FUN_0056bc10(0x12df9f4f);
  uVar1 = FUN_00598970(uVar1,"animating",1,0x1a294dad,0xca4ce1,0xca4ce1,uVar4);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  return;
}

