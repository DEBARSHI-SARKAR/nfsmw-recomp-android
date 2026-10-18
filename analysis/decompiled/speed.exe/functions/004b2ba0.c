/* speed.exe 004b2ba0 FUN_004b2ba0; analysis pseudocode, not buildable source.
 * calls 007f0df9 FUN_007f0df9
 * calls 007ec1a7 FUN_007ec1a7
 */

undefined4 FUN_004b2ba0(int param_1,int param_2,int param_3,undefined4 *param_4,int param_5)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = param_5 - ((param_3 + 0x1d) * 0x10 + param_2 * 0xc + param_1 * 0x128);
  if ((((0x17ff < iVar6) && (1 < param_1)) && (param_1 < 0x101)) &&
     (((0 < param_2 && (param_2 < 0x11)) && ((0 < param_3 && (param_3 <= param_2)))))) {
    *param_4 = 0x4d525453;
    FUN_007ec1a7();
    param_4[0xb] = param_2;
    puVar4 = param_4 + 100;
    puVar2 = puVar4 + param_1 * 0x4a;
    param_4[0xd] = param_3;
    param_4[10] = puVar2;
    param_4[0xc] = puVar2 + param_2 * 3;
    iVar5 = ((uint)(puVar2 + param_2 * 3 + param_3 * 4) & 0xffffffc0) + 0x40;
    param_4[0xe] = iVar5;
    param_4[0xf] = iVar5;
    param_4[0x17] = iVar5;
    param_4[0x18] = iVar5;
    param_4[0x19] = iVar5;
    param_4[8] = puVar4;
    param_4[9] = param_1;
    param_4[0x10] = param_5 + (int)param_4;
    param_4[0x11] = 0;
    param_4[0x12] = 0x96;
    param_4[0x13] = 0x32;
    param_4[0x14] = 0;
    param_4[0x15] = 0;
    param_4[0x16] = 0;
    param_4[0x1a] = 0;
    param_4[0x1b] = 0;
    param_4[0x1c] = 0;
    param_4[0x1d] = puVar4;
    FUN_007f0df9(param_4 + 0x1e,0x104);
    param_4[0x5f] = 0;
    if (iVar6 < 0x4000) {
      param_4[99] = 0x800;
    }
    else if (iVar6 < 0x8000) {
      param_4[99] = 0x1000;
    }
    else if (iVar6 < 0x10000) {
      param_4[99] = 0x2000;
    }
    else if (iVar6 < 0x18000) {
      param_4[99] = 0x4000;
    }
    else {
      param_4[99] = 0x8000;
    }
    iVar6 = 0;
    if (0 < param_1) {
      iVar5 = 0;
      do {
        piVar3 = (int *)(param_4[8] + iVar5);
        *piVar3 = iVar6;
        piVar3[1] = 0;
        iVar1 = iVar5 + 0x128;
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x128;
        piVar3[3] = iVar1 + param_4[8];
      } while (iVar6 < param_1);
    }
    *(undefined4 *)(param_1 * 0x128 + -0x11c + param_4[8]) = 0;
    if (0 < param_2) {
      iVar6 = 0;
      do {
        puVar4 = (undefined4 *)(param_4[10] + iVar6);
        iVar6 = iVar6 + 0xc;
        param_2 = param_2 + -1;
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 1;
      } while (param_2 != 0);
    }
    iVar6 = 0;
    if (0 < param_3) {
      iVar5 = 0;
      do {
        puVar4 = (undefined4 *)(param_4[0xc] + iVar5);
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x10;
        *puVar4 = param_4;
        puVar4[1] = iVar6;
        puVar4[2] = 0;
      } while (iVar6 < param_3);
    }
    return param_4[0xc];
  }
  return 0;
}

