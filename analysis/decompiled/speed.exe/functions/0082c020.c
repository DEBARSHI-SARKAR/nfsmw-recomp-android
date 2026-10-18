/* speed.exe 0082c020 FUN_0082c020; analysis pseudocode, not buildable source.
 */

undefined4 FUN_0082c020(uint param_1,undefined4 *param_2)

{
  char *pcVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 local_8;
  
  puVar3 = param_2;
  pcVar1 = (char *)((int)param_2 + 0xf);
  local_8 = 0xfffffff8;
  param_2 = (undefined4 *)0x0;
  if (*pcVar1 != '\0') {
    puVar5 = puVar3 + 6;
    iVar9 = -1;
    iVar6 = 0;
    do {
      uVar2 = *puVar5;
      iVar7 = iVar6;
      if ((uVar2 & 0x7f00) != 0x100) goto LAB_0082c09e;
      switch(uVar2 >> 0x14 & 7) {
      case 0:
      case 1:
        iVar9 = iVar9 + 1;
        iVar7 = iVar6 + 1;
        break;
      case 2:
      case 3:
        iVar6 = iVar9;
        break;
      case 4:
        iVar7 = iVar6 + -1;
        iVar9 = iVar9 + -1;
        iVar6 = iVar7;
        break;
      default:
        goto switchD_0082c06f_default;
      }
LAB_0082c09e:
      *puVar5 = (iVar6 << 0x1a ^ uVar2) & 0x1c000000 ^ uVar2;
switchD_0082c06f_default:
      puVar5 = puVar5 + 3;
      param_2 = (undefined4 *)((int)param_2 + 1);
      iVar6 = iVar7;
    } while (param_2 < (uint)*(byte *)((int)puVar3 + 0xf));
  }
  piVar8 = &DAT_009c2954;
  do {
    iVar6 = *piVar8;
    if ((iVar6 != 0) &&
       ((*(uint *)(iVar6 + 0x14) & param_1 & 0xff000000) == *(uint *)(iVar6 + 0x14))) {
      iVar6 = *(int *)(iVar6 + 0x1100);
      if (0xf < iVar6) {
        return 0xfffffff3;
      }
      local_8 = 0;
      uVar4 = (**(code **)(*DAT_009c29a8 + 0x10))();
      puVar3[2] = uVar4;
      *puVar3 = uVar4;
      *(undefined4 **)(*piVar8 + 0xc0 + iVar6 * 4) = puVar3;
      *(int *)(*piVar8 + 0x1100) = iVar6 + 1;
    }
    piVar8 = piVar8 + 1;
  } while ((int)piVar8 < 0x9c2964);
  return local_8;
}

