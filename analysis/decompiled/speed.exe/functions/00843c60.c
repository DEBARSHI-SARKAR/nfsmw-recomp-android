/* speed.exe 00843c60 FUN_00843c60; analysis pseudocode, not buildable source.
 * calls 0083c880 FUN_0083c880
 * calls 0083a980 FUN_0083a980
 */

void FUN_00843c60(int param_1,int param_2)

{
  param_1 = param_1 + 0x210;
  FUN_0083c880(param_1,0x1000,"FIRSTNAME",param_2 + 0x4f8);
  FUN_0083c880(param_1,0x1000,"LASTNAME",param_2 + 0x55c);
  FUN_0083c880(param_1,0x1000,"NAMEONCARD",param_2 + 0x5c0);
  FUN_0083c880(param_1,0x1000,"ADDRESS1",param_2 + 0x688);
  FUN_0083c880(param_1,0x1000,"ADDRESS2",param_2 + 0x6ec);
  FUN_0083c880(param_1,0x1000,&DAT_008c6c64,param_2 + 0x750);
  FUN_0083c880(param_1,0x1000,"STATE",param_2 + 0x7b4);
  FUN_0083c880(param_1,0x1000,"POSTCODE",param_2 + 0x7dc);
  FUN_0083c880(param_1,0x1000,"COUNTRY",param_2 + 0x808);
  FUN_0083c880(param_1,0x1000,"EMAIL",param_2 + 0x83a);
  FUN_0083c880(param_1,0x1000,"CARDTYPE",param_2 + 0x8a4);
  FUN_0083c880(param_1,0x1000,"CARDNUMBER",param_2 + 0x8f4);
  FUN_0083a980(param_1,0x1000,"EXPIRYMONTH",*(undefined4 *)(param_2 + 0x91c));
  FUN_0083a980(param_1,0x1000,"EXPIRYYEAR",*(undefined4 *)(param_2 + 0x920));
  return;
}

