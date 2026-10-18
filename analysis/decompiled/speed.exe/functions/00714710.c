/* speed.exe 00714710 FUN_00714710; analysis pseudocode, not buildable source.
 * calls 00626350 FUN_00626350
 * calls 004ccab0 FUN_004ccab0
 * calls 007c4b80 FUN_007c4b80
 * calls 004b8880 FUN_004b8880
 * calls 00625e60 FUN_00625e60
 * calls 00454810 FUN_00454810
 * calls 0065faf0 FUN_0065faf0
 * calls 004b2250 FUN_004b2250
 * calls 00625ef0 FUN_00625ef0
 * calls 004b1ce0 FUN_004b1ce0
 * calls 007c4840 FID_conflict:_memcpy
 * calls 004baa70 FUN_004baa70
 * calls 00713600 FUN_00713600
 * calls 006269b0 FUN_006269b0
 * calls 004cb270 FUN_004cb270
 * calls 005cc240 FUN_005cc240
 * calls 0045a430 FUN_0045a430
 * calls 00654af0 FUN_00654af0
 */

void __thiscall FUN_00714710(int *param_1,undefined1 *param_2)

{
  int *piVar1;
  uint *_Dst;
  short sVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puVar9 = param_2;
  local_4 = 0xffffffff;
  puStack_8 = &LAB_008800d8;
  pvStack_c = ExceptionList;
  uVar10 = 0;
  ExceptionList = &pvStack_c;
  uVar4 = FUN_004cb270(*(undefined4 *)(param_2 + 8));
  FUN_004b8880(uVar4,uVar10);
  local_4 = 0;
  if (param_1[0x11] != 0) {
    pbVar5 = (byte *)FUN_00454810(0xfe3254ea);
    if (pbVar5 == (byte *)0x0) {
      pbVar5 = (byte *)FUN_006269b0();
    }
    param_2 = (undefined1 *)(uint)*pbVar5;
    iVar6 = FUN_007c4b80();
    param_1[0x24] = iVar6;
  }
  FUN_005cc240();
  FUN_00626350(&param_2);
  FUN_0065faf0();
  if (*(int *)(puVar9 + 8) == 0xcc) {
    param_2 = &stack0xffffffb0;
    FUN_00625ef0(&param_2);
    FUN_00654af0();
  }
  pcVar7 = (char *)FUN_00454810(0x4d663bfc);
  if (pcVar7 == (char *)0x0) {
    pcVar7 = (char *)FUN_006269b0();
  }
  if (*pcVar7 == '\0') {
    uVar8 = param_1[10] & 0xffffffdf;
  }
  else {
    uVar8 = param_1[10] | 0x20;
  }
  param_1[10] = uVar8;
  pcVar7 = (char *)FUN_00454810(0x2976b959);
  if (pcVar7 == (char *)0x0) {
    pcVar7 = (char *)FUN_006269b0();
  }
  if (*pcVar7 == '\0') {
    uVar8 = param_1[10] & 0xfffffbff;
  }
  else {
    uVar8 = param_1[10] | 0x400;
  }
  param_1[10] = uVar8;
  param_2 = (undefined1 *)((uint)param_2 & 0xffffff00);
  sVar2 = 0;
  if (puVar9[0x38] != '\0') {
    iVar6 = 0;
    do {
      iVar6 = *(int *)(puVar9 + iVar6 * 4 + 0x1c);
      if ((iVar6 == 0) ||
         (((*(char *)(iVar6 + 0x19) != '\0' && (*(int *)(iVar6 + 0x40) != 0x6c484353)) &&
          (*(char *)(iVar6 + 0x19) != '\0')))) {
        param_2 = (undefined1 *)CONCAT31(param_2._1_3_,(char)param_2 + '\x01');
      }
      else {
        *(undefined4 *)(iVar6 + 0x20) = DAT_00925ae8;
        *(undefined1 *)(iVar6 + 0x18) = 1;
        FUN_00713600();
        if (*(char *)(iVar6 + 0x19) == '\0') {
          uVar4 = *(undefined4 *)(iVar6 + 0x28);
          uVar10 = (**(code **)(*param_1 + 0x24))(uVar4);
          uVar4 = FUN_004baa70(uVar10,uVar4);
          *(undefined4 *)(iVar6 + 0x14) = uVar4;
          param_1[10] = param_1[10] | 8;
        }
        else {
          uVar4 = FUN_004b2250(0,iVar6 + 0x40,0);
          *(undefined4 *)(iVar6 + 0x14) = uVar4;
          param_1[10] = param_1[10] | 8;
        }
      }
      sVar2 = sVar2 + 1;
      iVar6 = (int)sVar2;
    } while (iVar6 < (int)(uint)(byte)puVar9[0x38]);
  }
  param_1[0x23] = 0;
  param_1[10] = param_1[10] & 0xffffffef;
  if ((char)param_2 != '\0') {
    FUN_00626350();
    FUN_0065faf0();
    if (*(int *)(puVar9 + 8) == 0xcc) {
      FUN_00625e60();
      FUN_0065faf0();
    }
    FUN_004ccab0();
    FUN_004b1ce0();
    puVar9 = (undefined1 *)0x0;
  }
  param_1[0x22] = (int)puVar9;
  _Dst = DAT_009933c0;
  if (puVar9 != (undefined1 *)0x0) {
    for (; _Dst != DAT_009933c4; _Dst = _Dst + 1) {
      if ((undefined1 *)*_Dst == puVar9) {
        FID_conflict__memcpy(_Dst,_Dst + 1,((int)DAT_009933c4 - (int)(_Dst + 1) >> 2) << 2);
        DAT_009933c4 = DAT_009933c4 + -1;
        break;
      }
    }
  }
  *(undefined2 *)(param_1 + 0x25) = 0;
  if ((param_1[0x22] != 0) && (piVar1 = *(int **)(param_1[0x22] + 0xc), piVar1 != (int *)0x0)) {
    uVar3 = (**(code **)(*piVar1 + 0x30))();
    *(undefined2 *)(param_1 + 0x25) = uVar3;
  }
  local_4 = 0xffffffff;
  FUN_0045a430();
  ExceptionList = pvStack_c;
  return;
}

