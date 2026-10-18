/* speed.exe 0049e190 FUN_0049e190; analysis pseudocode, not buildable source.
 * calls 0049def0 FUN_0049def0
 */

undefined4 __thiscall FUN_0049e190(int param_1,undefined4 *param_2,float param_3,float *param_4)

{
  float fVar1;
  byte bVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 local_50 [80];
  
  iVar3 = *(int *)(param_1 + 0xc);
  iVar7 = 0;
  if (*(short *)(iVar3 + 6) != 0) {
    do {
      bVar2 = *(byte *)(iVar3 + 8);
      if ((bVar2 & 1) == 0) {
        iVar5 = iVar3 + 0xc + (uint)bVar2 * 2;
      }
      else {
        iVar5 = iVar3 + 10 + (uint)bVar2 * 2;
      }
      iVar6 = (uint)*(byte *)(iVar3 + 9) * iVar7;
      fVar1 = *(float *)(iVar6 + iVar5);
      if (fVar1 < param_3 == (fVar1 == param_3)) {
        FUN_0049def0(iVar6 + iVar5 + 4,local_50);
        cVar4 = (**(code **)*param_2)(local_50);
        if (cVar4 != '\0') {
          *param_4 = fVar1;
          return 1;
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)(uint)*(ushort *)(iVar3 + 6));
  }
  return 0;
}

