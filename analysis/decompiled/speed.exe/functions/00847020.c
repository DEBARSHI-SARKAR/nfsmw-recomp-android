/* speed.exe 00847020 FUN_00847020; analysis pseudocode, not buildable source.
 * calls 0083a670 FUN_0083a670
 * calls 0083b210 FUN_0083b210
 * calls 007c97c0 FUN_007c97c0
 * calls 007d6cb0 __security_check_cookie
 * calls 0083e2e0 FUN_0083e2e0
 * calls 00852e60 FUN_00852e60
 * calls 0083e460 FUN_0083e460
 * calls 00846640 FUN_00846640
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_00847020(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  byte *pbVar7;
  int *piVar8;
  byte *pbVar9;
  bool bVar10;
  undefined4 in_stack_0000001c;
  int local_158;
  byte local_150 [32];
  int local_130 [61];
  char local_39;
  undefined4 local_c;
  
  local_c = DAT_00906980;
  uVar2 = FUN_0083a670(in_stack_0000001c,&DAT_008b68c4,local_150,0x20,&DAT_00890978);
  FUN_0083b210(uVar2);
  puVar3 = (undefined1 *)FUN_007c97c0(local_150,0x40);
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 0;
  }
  puVar3 = (undefined1 *)FUN_007c97c0(local_150,0x2f);
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 0;
  }
  puVar3 = (undefined1 *)FUN_007c97c0(local_150,0x2e);
  if (puVar3 != (undefined1 *)0x0) {
    *puVar3 = 0;
  }
  iVar4 = FUN_00852e60(*(undefined4 *)(param_1 + 0x8c8),local_150);
  if (iVar4 != 0) {
    piVar5 = (int *)FUN_0083e2e0(*(undefined4 *)(param_1 + 0x8cc),iVar4);
    piVar6 = piVar5;
    piVar8 = local_130;
    for (iVar4 = 0x47; iVar4 != 0; iVar4 = iVar4 + -1) {
      *piVar8 = *piVar6;
      piVar6 = piVar6 + 1;
      piVar8 = piVar8 + 1;
    }
    iVar4 = FUN_00846640(param_1,&stack0x00000008,piVar5);
    if (iVar4 == 1) {
      local_158 = -1;
    }
    else {
      local_158 = (int)local_39;
    }
    iVar4 = 0x47;
    bVar10 = true;
    piVar6 = local_130;
    piVar8 = piVar5;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar10 = *piVar6 == *piVar8;
      piVar6 = piVar6 + 1;
      piVar8 = piVar8 + 1;
    } while (bVar10);
    if (!bVar10) {
      FUN_0083e460(*(undefined4 *)(param_1 + 0x8cc),1);
      if (*(code **)(param_1 + 0x8f4) != (code *)0x0) {
        (**(code **)(param_1 + 0x8f4))
                  (param_1,piVar5,0x70676574,local_158,*(undefined4 *)(param_1 + 0x8f8));
      }
    }
    if (*(char *)(param_1 + 0x8fc) != '\0') {
      pbVar9 = local_150;
      pbVar7 = (byte *)(param_1 + 0x8fc);
      do {
        bVar1 = *pbVar7;
        bVar10 = bVar1 < *pbVar9;
        if (bVar1 != *pbVar9) {
LAB_00847194:
          iVar4 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_00847199;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar7[1];
        bVar10 = bVar1 < pbVar9[1];
        if (bVar1 != pbVar9[1]) goto LAB_00847194;
        pbVar7 = pbVar7 + 2;
        pbVar9 = pbVar9 + 2;
      } while (bVar1 != 0);
      iVar4 = 0;
LAB_00847199:
      if (iVar4 == 0) {
        piVar5[0x3e] = piVar5[0x3e] | 0x8000;
        if (*(code **)(param_1 + 0x8f4) != (code *)0x0) {
          (**(code **)(param_1 + 0x8f4))
                    (param_1,piVar5,0x67696e76,0x8000,*(undefined4 *)(param_1 + 0x8f8));
        }
        *(byte *)(param_1 + 0x8fc) = 0;
      }
    }
  }
  return;
}

