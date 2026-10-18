/* speed.exe 005570e0 FUN_005570e0; analysis pseudocode, not buildable source.
 * calls 00794f80 FUN_00794f80
 * calls 007976f0 FUN_007976f0
 * calls 0056bc10 FUN_0056bc10
 * calls 00598970 FUN_00598970
 * calls 00527ee0 FUN_00527ee0
 * calls 00525220 FUN_00525220
 * calls 0078b800 FUN_0078b800
 * calls 00793170 FUN_00793170
 * calls 00799f50 FUN_00799f50
 * calls 0054b8d0 FUN_0054b8d0
 */

void __fastcall FUN_005570e0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  
  FUN_00799f50();
  uVar1 = FUN_0078b800(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30),
                       *(undefined4 *)(param_1 + 0x2f0));
  *(undefined4 *)(param_1 + 0x34) = uVar1;
  FUN_00525220(*(undefined4 *)(param_1 + 0x10),0x3d2937d5,
               *(undefined4 *)(param_1 + 0x268 + *(int *)(param_1 + 0x2c) * 4));
  iVar2 = *(int *)(param_1 + 0x2c);
  if (iVar2 == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    uVar4 = 0xe9638d3e;
  }
  else if (iVar2 == 1) {
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    uVar4 = 0x2521e5eb;
  }
  else {
    if (iVar2 != 2) goto LAB_00557162;
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    uVar4 = 0xaaab31e9;
  }
  FUN_00527ee0(uVar1,0x1166c783,uVar4);
LAB_00557162:
  uVar1 = 1;
  pcVar3 = FUN_0054ba90;
  FUN_00794f80(FUN_0054ba90,1);
  FUN_00793170(pcVar3,uVar1);
  iVar2 = FUN_007976f0(*(undefined4 *)(param_1 + 0x34),FUN_0054ba90,param_1);
  *(int *)(param_1 + 0x38) = iVar2;
  if (iVar2 < 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x10);
    uVar4 = FUN_0056bc10(0x6cf6e689);
    FUN_00598970(uVar1,&DAT_00890978,1,0x417b2601,0x911ab364,0x911ab364,uVar4);
    return;
  }
  if (iVar2 == 0) {
    FUN_0054b8d0(0);
    *(undefined1 *)(DAT_0091cae0 + 1) = 1;
    return;
  }
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  uVar4 = FUN_0056bc10(0x12df9f4f);
  uVar1 = FUN_00598970(uVar1,"animating",1,0x1a294dad,0xca4ce1,0xca4ce1,uVar4);
  *(undefined4 *)(param_1 + 0x260) = uVar1;
  return;
}

