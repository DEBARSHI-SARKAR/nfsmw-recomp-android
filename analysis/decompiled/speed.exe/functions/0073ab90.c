/* speed.exe 0073ab90 FUN_0073ab90; analysis pseudocode, not buildable source.
 */

uint FUN_0073ab90(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  
  if ((*param_1 != *param_2) || (param_1[1] != param_2[1])) {
    return *param_1 & 0xffffff00;
  }
  iVar3 = 0;
  puVar2 = param_2 + 2;
  do {
    if (*(uint *)(((int)param_1 - (int)param_2) + (int)puVar2) != *puVar2) goto LAB_0073ac2a;
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 1;
  } while (iVar3 < 4);
  iVar3 = 0;
  puVar2 = param_1 + 7;
  puVar1 = param_2;
  while ((((((puVar2[-1] == puVar1[6] &&
             (*puVar2 == *(uint *)(((int)param_2 - (int)param_1) + (int)puVar2))) &&
            (puVar2[1] == puVar1[8])) && ((puVar2[6] == puVar1[0xd] && (puVar2[7] == puVar1[0xe]))))
          && ((puVar2[8] == puVar1[0xf] &&
              ((puVar2[9] == puVar1[0x10] && (puVar2[10] == puVar1[0x11])))))) &&
         (puVar2[0xb] == puVar1[0x12]))) {
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 0xd;
    puVar1 = puVar1 + 0xd;
    if (0 < iVar3) {
      return CONCAT31((int3)((uint)puVar2 >> 8),1);
    }
  }
LAB_0073ac2a:
  return (uint)puVar2 & 0xffffff00;
}

