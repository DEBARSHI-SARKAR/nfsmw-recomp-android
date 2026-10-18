/* speed.exe 006d1e30 FUN_006d1e30; analysis pseudocode, not buildable source.
 */

void __thiscall FUN_006d1e30(char *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if (((*param_1 != '\0') && (DAT_0093cb1c != (float *)0x0)) && (DAT_0093cb1c < DAT_0093cb20)) {
    fVar1 = param_2[0x10];
    fVar2 = param_2[0xc];
    fVar3 = param_2[0x11];
    fVar4 = param_2[0xd];
    fVar5 = param_2[0x12];
    fVar6 = param_2[0xe];
    fVar7 = param_2[0xc];
    fVar8 = param_2[0x10];
    fVar9 = param_2[0xd];
    fVar10 = param_2[0x11];
    fVar11 = param_2[0xe];
    fVar12 = param_2[0x12];
    *DAT_0093cb1c = *param_2 - (fVar1 + fVar2);
    DAT_0093cb1c[1] = param_2[1] - (fVar3 + fVar4);
    DAT_0093cb1c[2] = param_2[2] - (fVar5 + fVar6);
    DAT_0093cb1c[3] = param_2[4];
    DAT_0093cb1c[4] = param_2[5];
    DAT_0093cb1c[5] = param_2[6];
    DAT_0093cb1c[6] = (fVar7 - fVar8) + *param_2;
    DAT_0093cb1c[7] = (fVar9 - fVar10) + param_2[1];
    DAT_0093cb1c[8] = (fVar11 - fVar12) + param_2[2];
    DAT_0093cb1c[9] = param_2[4];
    DAT_0093cb1c[10] = param_2[7];
    DAT_0093cb1c[0xb] = param_2[6];
    DAT_0093cb1c[0xc] = fVar1 + fVar2 + *param_2;
    DAT_0093cb1c[0xd] = fVar3 + fVar4 + param_2[1];
    DAT_0093cb1c[0xe] = fVar5 + fVar6 + param_2[2];
    DAT_0093cb1c[0xf] = param_2[4];
    DAT_0093cb1c[0x10] = param_2[7];
    DAT_0093cb1c[0x11] = param_2[8];
    DAT_0093cb1c[0x12] = *param_2 - (fVar7 - fVar8);
    DAT_0093cb1c[0x13] = param_2[1] - (fVar9 - fVar10);
    DAT_0093cb1c[0x14] = param_2[2] - (fVar11 - fVar12);
    DAT_0093cb1c[0x15] = param_2[4];
    DAT_0093cb1c[0x16] = param_2[5];
    DAT_0093cb1c[0x17] = param_2[8];
    DAT_0093cb1c = DAT_0093cb1c + 0x18;
  }
  return;
}

