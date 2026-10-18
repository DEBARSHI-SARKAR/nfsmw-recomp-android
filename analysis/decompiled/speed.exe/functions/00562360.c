/* speed.exe 00562360 FUN_00562360; analysis pseudocode, not buildable source.
 * calls 005750d0 FUN_005750d0
 * calls 00525220 FUN_00525220
 * calls 00796d30 FUN_00796d30
 * calls 005b8550 FUN_005b8550
 * calls 005b1360 FUN_005b1360
 * calls 0056bc10 FUN_0056bc10
 * calls 005b8400 FUN_005b8400
 * calls 0051a2f0 FUN_0051a2f0
 * calls 00586290 FUN_00586290
 * calls 00598970 FUN_00598970
 * calls 00799c10 FUN_00799c10
 * calls 00560220 FUN_00560220
 * calls 00541ab0 FUN_00541ab0
 * calls 00516af0 FUN_00516af0
 */

undefined4 * __thiscall FUN_00562360(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008712b3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  param_1[0xb] = &PTR___purecall_0089b34c;
  puVar4 = param_1 + 0x12;
  local_4 = 0;
  *param_1 = &PTR_FUN_0089f048;
  param_1[0xb] = &PTR_LAB_0089f044;
  param_1[0xc] = 0;
  param_1[0xd] = 3;
  param_1[0xe] = 0xffffffff;
  param_1[0xf] = 0;
  param_1[0x10] = 2;
  param_1[0x11] = 0xffffffff;
  FUN_0051a2f0();
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[0x9b] = 0;
  *(undefined1 *)(param_1 + 0x9c) = 0;
  param_1[0xa0] = 0;
  FUN_005750d0(param_1[4],"ScrollBar",1,1,0);
  FUN_005750d0(param_1[4],"H_ScrollBar",0,1,0);
  param_1[0xcf] = 1;
  param_1[0xd0] = 1;
  *(undefined1 *)(param_1 + 0xd1) = 0;
  param_1[0xd2] = 0;
  param_1[0xd4] = 2;
  param_1[0xd5] = 0;
  param_1[0xd6] = 2;
  param_1[0xd7] = 0;
  *(undefined1 *)(DAT_0091cae0 + 1) = 0;
  param_1[0x9d] = 0x34fa2c1;
  param_1[0x9e] = 0xb94fd70e;
  param_1[0x9f] = 0x6f547e4c;
  FUN_00525220(param_1[4],0xca5bcc10,0x99602893);
  FUN_00541ab0(1,10);
  FUN_00525220(param_1[4],0x7326e44c,0xb90429ea);
  FUN_00525220(param_1[4],0x2caec5d0,*(undefined4 *)(&DAT_008f33d8 + param_1[0xd4] * 4));
  puVar5 = &LAB_005246f0;
  puVar6 = param_1;
  FUN_00796d30(puVar4,&LAB_005246f0,param_1);
  iVar2 = FUN_00799c10(puVar4,puVar5,puVar6);
  if (iVar2 < 0) {
    uVar1 = param_1[4];
    uVar3 = FUN_0056bc10(0x6cf6e689);
    FUN_00598970(uVar1,&DAT_00890978,1,0x417b2601,0x911ab364,0x911ab364,uVar3);
  }
  else {
    if (iVar2 == 0) {
      FUN_00560220();
    }
    if (param_1[4] != 0) {
      iVar2 = FUN_00516af0(param_1[4]);
      if (iVar2 != 0) {
        iVar2 = FUN_005b8550(0x9321399c);
        if (iVar2 != 0) {
          iVar2 = FUN_005b1360(0x1b20c4);
          if (iVar2 != 0) {
            FUN_005b8400(iVar2,0);
            *(undefined4 *)(iVar2 + 0x10) = 0;
          }
        }
      }
    }
    FUN_00525220(param_1[4],0x1450dd,0xe9a7da00);
    FUN_00525220(param_1[4],0x116d2d5c,0x34fa2c1);
  }
  ExceptionList = local_c;
  return param_1;
}

