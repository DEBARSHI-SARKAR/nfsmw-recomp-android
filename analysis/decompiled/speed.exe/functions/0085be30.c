/* speed.exe 0085be30 FUN_0085be30; analysis pseudocode, not buildable source.
 * calls 007c97c0 FUN_007c97c0
 * calls 007d6cb0 __security_check_cookie
 * calls 0083fb40 FUN_0083fb40
 * calls 008461b0 FUN_008461b0
 * calls 0083ecf0 FUN_0083ecf0
 */

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_0085be30(int param_1)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  int *piVar9;
  byte *pbVar10;
  bool bVar11;
  int local_26c;
  undefined1 local_264 [32];
  byte local_244 [32];
  undefined1 local_224 [32];
  undefined1 local_204 [512];
  undefined4 local_4;
  
  local_4 = DAT_00906980;
  local_26c = FUN_0083ecf0(*(undefined4 *)(param_1 + 0x34),param_1 + 8,local_204,0x200);
  puVar4 = local_204;
  if (0 < local_26c) {
    do {
      puVar2 = (undefined1 *)FUN_007c97c0(puVar4,9);
      *puVar2 = 0;
      FUN_008461b0(local_244,puVar4,0x20);
      puVar3 = (undefined1 *)FUN_007c97c0(puVar2 + 1,9);
      *puVar3 = 0;
      FUN_008461b0(local_224,puVar2 + 1,0x20);
      puVar4 = (undefined1 *)FUN_007c97c0(puVar3 + 5,10);
      *puVar4 = 0;
      FUN_008461b0(local_264,puVar3 + 5,0x20);
      puVar4 = puVar4 + 1;
      puVar2 = (undefined1 *)FUN_007c97c0(local_264,0x3a);
      *puVar2 = 0;
      iVar5 = FUN_0083fb40(local_264);
      iVar6 = 0;
      if (0 < *(int *)(param_1 + 400)) {
        piVar9 = (int *)(param_1 + 0x19c);
        do {
          pbVar10 = local_244;
          pbVar7 = (byte *)(piVar9 + 0x11);
          do {
            bVar1 = *pbVar7;
            bVar11 = bVar1 < *pbVar10;
            if (bVar1 != *pbVar10) {
LAB_0085bf2b:
              iVar8 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
              goto LAB_0085bf30;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar7[1];
            bVar11 = bVar1 < pbVar10[1];
            if (bVar1 != pbVar10[1]) goto LAB_0085bf2b;
            pbVar7 = pbVar7 + 2;
            pbVar10 = pbVar10 + 2;
          } while (bVar1 != 0);
          iVar8 = 0;
LAB_0085bf30:
          if ((iVar8 == 0) && (*piVar9 != iVar5)) {
            *piVar9 = iVar5;
          }
          iVar6 = iVar6 + 1;
          piVar9 = piVar9 + 0x2c;
        } while (iVar6 < *(int *)(param_1 + 400));
      }
      local_26c = local_26c + -1;
    } while (local_26c != 0);
  }
  return;
}

