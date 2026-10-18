/* speed.exe 0055eb40 FUN_0055eb40; analysis pseudocode, not buildable source.
 * calls 005750d0 FUN_005750d0
 * calls 00525220 FUN_00525220
 * calls 00799f50 FUN_00799f50
 * calls 0056e340 FUN_0056e340
 * calls 00796d30 FUN_00796d30
 * calls 005570e0 FUN_005570e0
 * calls 0056bc10 FUN_0056bc10
 * calls 0051a2f0 FUN_0051a2f0
 * calls 00795060 FUN_00795060
 * calls 00586290 FUN_00586290
 * calls 00793170 FUN_00793170
 * calls 005252d0 FUN_005252d0
 * calls 0053d740 FUN_0053d740
 * calls 00598970 FUN_00598970
 * calls 00799c10 FUN_00799c10
 * calls 0078b7d0 FUN_0078b7d0
 * calls 00794f80 FUN_00794f80
 */

undefined4 * __thiscall FUN_0055eb40(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00870f43;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  puVar3 = param_1 + 0xf;
  local_4 = 0;
  *param_1 = &PTR_FUN_0089ecbc;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0xffffffff;
  param_1[0xe] = 0xffffffff;
  FUN_0051a2f0();
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[0x98] = 0;
  *(undefined1 *)(param_1 + 0x99) = 0;
  param_1[0x9d] = 0;
  FUN_005750d0(param_1[4],"ScrollBar",1,0,0);
  param_1[0xb5] = 1;
  *(undefined1 *)(param_1 + 0xb6) = 0;
  param_1[0xb9] = 0;
  param_1[0xba] = 1;
  param_1[0xbc] = 0;
  param_1[0xbd] = 0;
  uVar6 = 1;
  pcVar4 = FUN_0054ba90;
  *(undefined1 *)(DAT_0091cae0 + 1) = 0;
  FUN_00794f80(FUN_0054ba90,1);
  FUN_00793170(pcVar4,uVar6);
  FUN_00799f50();
  FUN_0078b7d0();
  FUN_00799f50();
  FUN_00795060();
  param_1[0x9a] = 0x34fa2c1;
  param_1[0x9b] = 0xb94fd70e;
  param_1[0x9c] = 0x6f547e4c;
  FUN_00525220(param_1[4],0xca5bcc10,0xce678ad3);
  FUN_00525220(param_1[4],0x1450dd,0xe9a7da00);
  FUN_0053d740(1,0xf);
  FUN_00525220(param_1[4],0x7326e44c,0xb90429ea);
  uVar6 = param_1[4];
  uVar1 = FUN_0056e340();
  FUN_005252d0(uVar6,0x92d8775b,uVar1);
  puVar5 = &LAB_00523c40;
  puVar7 = param_1;
  FUN_00796d30(puVar3,&LAB_00523c40,param_1);
  iVar2 = FUN_00799c10(puVar3,puVar5,puVar7);
  if (iVar2 < 0) {
    uVar6 = param_1[4];
    uVar1 = FUN_0056bc10(0x6cf6e689);
    FUN_00598970(uVar6,&DAT_00890978,1,0x417b2601,0x911ab364,0x911ab364,uVar1);
  }
  else if (iVar2 == 0) {
    FUN_005570e0();
  }
  ExceptionList = local_c;
  return param_1;
}

