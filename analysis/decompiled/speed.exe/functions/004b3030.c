/* speed.exe 004b3030 FUN_004b3030; analysis pseudocode, not buildable source.
 * calls 007ec1bd FUN_007ec1bd
 * calls 007ec1c8 FUN_007ec1c8
 */

int FUN_004b3030(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  
  if (((param_1 != (int *)0x0) && (piVar1 = (int *)*param_1, *piVar1 == 0x4d525453)) &&
     (param_1[2] != 0)) {
    iVar2 = param_1[3];
    uVar5 = *(uint *)(iVar2 + 4) & 0xffffff;
    *(uint *)(iVar2 + 4) = uVar5;
    FUN_007ec1bd();
    iVar3 = param_1[2];
    param_1[2] = iVar3 - uVar5;
    FUN_007ec1c8();
    if (0 < (int)(iVar3 - uVar5)) {
      piVar4 = (int *)(uVar5 + iVar2);
      uVar5 = piVar4[1];
      while ((uVar5 & 0xff000000) != param_1[1] << 0x18) {
        if (*piVar4 == -1) {
          piVar4 = (int *)piVar1[0xf];
        }
        else {
          piVar4 = (int *)((int)piVar4 + (uVar5 & 0xffffff));
        }
        uVar5 = piVar4[1];
      }
      param_1[3] = (int)piVar4;
    }
    return iVar2;
  }
  return 0;
}

