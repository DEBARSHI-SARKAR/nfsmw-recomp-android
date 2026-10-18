/* speed.exe 0046d800 FUN_0046d800; analysis pseudocode, not buildable source.
 * calls 006bdd20 FUN_006bdd20
 * calls 0045f7c0 FUN_0045f7c0
 * calls 0045ecf0 FUN_0045ecf0
 * calls 0045f490 FUN_0045f490
 */

void FUN_0046d800(void)

{
  float *in_EAX;
  undefined4 *unaff_ESI;
  float *unaff_EDI;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  
  local_64 = 0;
  local_70 = *in_EAX - *unaff_EDI;
  local_6c = in_EAX[1] - unaff_EDI[1];
  local_68 = in_EAX[2] - unaff_EDI[2];
  FUN_0045f490(&local_70,&local_70);
  local_60 = 0;
  local_5c = 0;
  local_58 = 0x3f800000;
  local_54 = 0;
  local_80 = 0;
  local_7c = 0;
  local_78 = 0xbf800000;
  local_74 = 0;
  local_90 = 0;
  local_8c = 0;
  local_88 = 0;
  local_84 = 0;
  FUN_0045f7c0(&local_90,&local_80,&local_70);
  FUN_0045f7c0(&local_80,&local_70,&local_90);
  FUN_0045f490(&local_90,&local_90);
  FUN_0045f490(&local_80,&local_80);
  *unaff_ESI = local_90;
  unaff_ESI[1] = local_80;
  unaff_ESI[2] = local_70;
  unaff_ESI[3] = 0;
  unaff_ESI[4] = local_8c;
  unaff_ESI[5] = local_7c;
  unaff_ESI[7] = 0;
  unaff_ESI[0xb] = 0;
  unaff_ESI[0xc] = 0;
  unaff_ESI[0xd] = 0;
  unaff_ESI[0xe] = 0;
  unaff_ESI[6] = local_6c;
  unaff_ESI[8] = local_88;
  unaff_ESI[9] = local_78;
  unaff_ESI[10] = local_68;
  unaff_ESI[0xf] = 0x3f800000;
  FUN_006bdd20();
  local_20 = -*unaff_EDI;
  local_1c = -unaff_EDI[1];
  local_50 = 0x3f800000;
  local_4c = 0;
  local_18 = -unaff_EDI[2];
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0x3f800000;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0x3f800000;
  local_24 = 0;
  local_14 = 0x3f800000;
  FUN_0045ecf0();
  return;
}

