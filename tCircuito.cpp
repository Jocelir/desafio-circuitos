struct tCircuito
{
  float R1;
  float R2;
  float V1;
};

float ResistenciaEmSerie (float R1, float R2)
{
  return R1+R2;
}

float ResistenciaEmParalelo (float R1, float R2)
{
  return (R1*R2)/(R1+R2);
}

float CorrenteTotalCircuito (float ResistenciaEquivalente , float V1)
{
  return ResistenciaEquivalente*V1;
}

float PotenciaAssociadaFonte (float V1, float CorrenteTotal)
{
  return V1*CorrenteTotal;
}