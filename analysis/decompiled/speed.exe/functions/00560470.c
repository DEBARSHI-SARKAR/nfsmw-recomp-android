/* speed.exe 00560470 FUN_00560470; analysis pseudocode, not buildable source.
 * calls 0056bc60 FUN_0056bc60
 * calls 0064a3d0 FUN_0064a3d0
 * calls 00460c70 FUN_00460c70
 * calls 0083ed50 FUN_0083ed50
 * calls 00586290 FUN_00586290
 * calls 00598a30 FUN_00598a30
 * calls 007c4b80 FUN_007c4b80
 * calls 0083cd40 FUN_0083cd40
 * calls 00592170 FUN_00592170
 * calls 0056e300 FUN_0056e300
 * calls 00558b20 FUN_00558b20
 * calls 00799eb0 FUN_00799eb0
 * calls 0083cd10 FUN_0083cd10
 */

undefined4 * __thiscall FUN_00560470(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_00870ff1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00586290(param_2);
  local_4 = 0;
  *param_1 = &PTR_FUN_0089e398;
  FUN_00592170(param_1[4],"ScrollBar","ScrollBar",1,0,0,1);
  uVar2 = FUN_007c4b80();
  param_1[0x38] = uVar2;
  param_1[0x39] = 0;
  param_1[0x23a] = 0;
  puVar5 = param_1 + 0x23c;
  param_1[0x23b] = 0;
  *puVar5 = puVar5;
  param_1[0x23d] = puVar5;
  param_1[0x23e] = 0;
  param_1[0x23f] = 0;
  puVar5 = param_1 + 0x3a;
  for (iVar4 = 0x200; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00558b20();
  uVar2 = FUN_0064a3d0();
  FUN_00460c70(param_1 + 0x240,uVar2);
  uVar2 = param_1[4];
  uVar3 = FUN_0056bc60(0x43003b5b);
  uVar2 = FUN_00598a30(uVar2,&DAT_00890978,1,0x1a294dad,0x7345710f,uVar3);
  param_1[0x23b] = uVar2;
  uVar2 = FUN_007c4b80();
  param_1[0x23a] = uVar2;
  cVar1 = FUN_00799eb0();
  if (cVar1 != '\0') {
    iVar4 = FUN_0083cd40(0x6f70656e,0,0);
    if (iVar4 == 1) {
      iVar4 = FUN_0083ed50();
      param_1[0x39] = iVar4;
      if (iVar4 != 0) {
        FUN_0056e300(1);
        FUN_0083cd10(0,0);
        goto LAB_0056060f;
      }
    }
  }
  uVar2 = param_1[4];
  uVar3 = FUN_0056bc60(0xa392d977);
  FUN_00598a30(uVar2,&DAT_00890978,1,0x417b2601,0x911ab364,uVar3);
LAB_0056060f:
  if (DAT_0091ca68 != (undefined4 *)0x0) {
    (**(code **)*DAT_0091ca68)(1);
    DAT_0091ca68 = (undefined4 *)0x0;
  }
  ExceptionList = local_c;
  return param_1;
}

