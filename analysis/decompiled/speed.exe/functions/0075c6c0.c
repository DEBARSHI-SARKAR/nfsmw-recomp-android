/* speed.exe 0075c6c0 FUN_0075c6c0; analysis pseudocode, not buildable source.
 * calls 0065f7a0 FUN_0065f7a0
 * calls 0045cd20 __break
 * calls 0075bb40 FUN_0075bb40
 * calls 004647c0 FUN_004647c0
 */

int __thiscall FUN_0075c6c0(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined1 local_80 [128];
  
  iVar1 = param_2[0xc2];
  FUN_004647c0(local_80,"CARS\\%s\\TEXTURES.BIN",*param_2 * 0xd0 + DAT_009b09d8);
  iVar4 = FUN_0065f7a0(local_80);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    __break();
  }
  piVar5 = (int *)FUN_0075bb40(param_2,(uint)(iVar1 == 0));
  iVar4 = *piVar5;
  piVar2 = (int *)piVar5[1];
  piVar5[6] = (uint)(iVar1 == 0);
  piVar5[4] = 0;
  *piVar2 = iVar4;
  *(int **)(iVar4 + 4) = piVar2;
  puVar3 = *(undefined4 **)(param_1 + 0x5c);
  *puVar3 = piVar5;
  *(int **)(param_1 + 0x5c) = piVar5;
  piVar5[1] = (int)puVar3;
  *piVar5 = param_1 + 0x58;
  return piVar5[0x1b4];
}

