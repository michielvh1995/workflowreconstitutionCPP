#ifndef COMMON
#include "common.h" 
#endif

vector<Tool> biotools() {

// The retrieved biotools toolset consisted of 1817 tools.

  vector<Tool> biotools;
  Input ins;
  Input outs;
  // Now we add all the tools to the list

  Tool _2d_page;
  _2d_page.id = "_2d_page";
  _2d_page.operations = {"_2d_page"};
  _2d_page.type = "tool";

  _2d_page.inTypes = {};
  _2d_page.inTypes.push_back("http://edamontology.org/data_0897");
  _2d_page.inTypes.push_back("http://edamontology.org/data_0942");
  _2d_page.inTypes.push_back("http://edamontology.org/data_1528");
  sort (_2d_page.inTypes.begin(),_2d_page.inTypes.end());
  _2d_page.output = "http://edamontology.org/data_3021";
  _2d_page.output = "http://edamontology.org/data_2373";
  _2d_page.output = "http://edamontology.org/data_2091";
  _2d_page.output = "http://edamontology.org/data_1519";
  _2d_page.output = "http://edamontology.org/data_1528";
  biotools.push_back(_2d_page);

  Tool _4dxpress;
  _4dxpress.id = "_4dxpress";
  _4dxpress.operations = {"_4dxpress"};
  _4dxpress.type = "tool";

  _4dxpress.inTypes = {};
  _4dxpress.inTypes.push_back("http://edamontology.org/data_0916");
  sort (_4dxpress.inTypes.begin(),_4dxpress.inTypes.end());
  _4dxpress.output = "http://edamontology.org/data_1033";
  _4dxpress.output = "http://edamontology.org/data_1796";
  _4dxpress.output = "http://edamontology.org/data_1026";
  biotools.push_back(_4dxpress);

  Tool BISE;
  BISE.id = "BISE";
  BISE.operations = {"BISE"};
  BISE.type = "tool";

  BISE.inTypes = {};
  BISE.inTypes.push_back("http://edamontology.org/data_3669");
  BISE.inTypes.push_back("http://edamontology.org/data_1731");
  BISE.inTypes.push_back("http://edamontology.org/data_2337");
  BISE.inTypes.push_back("http://edamontology.org/data_0949");
  sort (BISE.inTypes.begin(),BISE.inTypes.end());
  BISE.output = "http://edamontology.org/data_0968";
  BISE.output = "http://edamontology.org/data_0966";
  biotools.push_back(BISE);

  Tool BeanMine;
  BeanMine.id = "BeanMine";
  BeanMine.operations = {"BeanMine"};
  BeanMine.type = "tool";

  BeanMine.inTypes = {};
  BeanMine.inTypes.push_back("http://edamontology.org/data_3753");
  BeanMine.inTypes.push_back("http://edamontology.org/data_3786");
  BeanMine.inTypes.push_back("http://edamontology.org/data_1255");
  sort (BeanMine.inTypes.begin(),BeanMine.inTypes.end());
  BeanMine.output = "http://edamontology.org/data_1255";
  BeanMine.output = "http://edamontology.org/data_2353";
  biotools.push_back(BeanMine);

  Tool BovineMine;
  BovineMine.id = "BovineMine";
  BovineMine.operations = {"BovineMine"};
  BovineMine.type = "tool";

  BovineMine.inTypes = {};
  BovineMine.inTypes.push_back("http://edamontology.org/data_3753");
  BovineMine.inTypes.push_back("http://edamontology.org/data_3786");
  BovineMine.inTypes.push_back("http://edamontology.org/data_1255");
  sort (BovineMine.inTypes.begin(),BovineMine.inTypes.end());
  BovineMine.output = "http://edamontology.org/data_1255";
  BovineMine.output = "http://edamontology.org/data_2353";
  biotools.push_back(BovineMine);

  Tool CHOmine;
  CHOmine.id = "CHOmine";
  CHOmine.operations = {"CHOmine"};
  CHOmine.type = "tool";

  CHOmine.inTypes = {};
  CHOmine.inTypes.push_back("http://edamontology.org/data_3753");
  CHOmine.inTypes.push_back("http://edamontology.org/data_3786");
  CHOmine.inTypes.push_back("http://edamontology.org/data_1255");
  sort (CHOmine.inTypes.begin(),CHOmine.inTypes.end());
  CHOmine.output = "http://edamontology.org/data_1255";
  CHOmine.output = "http://edamontology.org/data_2353";
  biotools.push_back(CHOmine);

  Tool ChickpeaMine;
  ChickpeaMine.id = "ChickpeaMine";
  ChickpeaMine.operations = {"ChickpeaMine"};
  ChickpeaMine.type = "tool";

  ChickpeaMine.inTypes = {};
  ChickpeaMine.inTypes.push_back("http://edamontology.org/data_3753");
  ChickpeaMine.inTypes.push_back("http://edamontology.org/data_3786");
  ChickpeaMine.inTypes.push_back("http://edamontology.org/data_1255");
  sort (ChickpeaMine.inTypes.begin(),ChickpeaMine.inTypes.end());
  ChickpeaMine.output = "http://edamontology.org/data_1255";
  ChickpeaMine.output = "http://edamontology.org/data_2353";
  biotools.push_back(ChickpeaMine);

  Tool CoBAMP;
  CoBAMP.id = "CoBAMP";
  CoBAMP.operations = {"CoBAMP"};
  CoBAMP.type = "tool";

  CoBAMP.inTypes = {};
  CoBAMP.inTypes.push_back("http://edamontology.org/data_2600");
  sort (CoBAMP.inTypes.begin(),CoBAMP.inTypes.end());
  CoBAMP.output = "http://edamontology.org/data_2600";
  biotools.push_back(CoBAMP);

  Tool CoExpresso;
  CoExpresso.id = "CoExpresso";
  CoExpresso.operations = {"CoExpresso"};
  CoExpresso.type = "tool";

  CoExpresso.inTypes = {};
  CoExpresso.inTypes.push_back("http://edamontology.org/data_2884");
  sort (CoExpresso.inTypes.begin(),CoExpresso.inTypes.end());
  CoExpresso.output = "http://edamontology.org/data_3021";
  CoExpresso.output = "http://edamontology.org/data_2295";
  biotools.push_back(CoExpresso);

  Tool ComplexBrowser;
  ComplexBrowser.id = "ComplexBrowser";
  ComplexBrowser.operations = {"ComplexBrowser"};
  ComplexBrowser.type = "tool";

  ComplexBrowser.inTypes = {};
  ComplexBrowser.inTypes.push_back("http://edamontology.org/data_0896");
  ComplexBrowser.inTypes.push_back("http://edamontology.org/data_2048");
  ComplexBrowser.inTypes.push_back("http://edamontology.org/data_2884");
  sort (ComplexBrowser.inTypes.begin(),ComplexBrowser.inTypes.end());
  ComplexBrowser.output = "http://edamontology.org/data_2603";
  ComplexBrowser.output = "http://edamontology.org/data_0906";
  biotools.push_back(ComplexBrowser);

  Tool CowpeaMine;
  CowpeaMine.id = "CowpeaMine";
  CowpeaMine.operations = {"CowpeaMine"};
  CowpeaMine.type = "tool";

  CowpeaMine.inTypes = {};
  CowpeaMine.inTypes.push_back("http://edamontology.org/data_3753");
  CowpeaMine.inTypes.push_back("http://edamontology.org/data_3786");
  CowpeaMine.inTypes.push_back("http://edamontology.org/data_1255");
  sort (CowpeaMine.inTypes.begin(),CowpeaMine.inTypes.end());
  CowpeaMine.output = "http://edamontology.org/data_1255";
  CowpeaMine.output = "http://edamontology.org/data_2353";
  biotools.push_back(CowpeaMine);

  Tool FASTA_API_EBI;
  FASTA_API_EBI.id = "FASTA_API_EBI";
  FASTA_API_EBI.operations = {"FASTA_API_EBI"};
  FASTA_API_EBI.type = "tool";

  FASTA_API_EBI.inTypes = {};
  FASTA_API_EBI.inTypes.push_back("http://edamontology.org/data_0857");
  sort (FASTA_API_EBI.inTypes.begin(),FASTA_API_EBI.inTypes.end());
  FASTA_API_EBI.output = "http://edamontology.org/data_2044";
  biotools.push_back(FASTA_API_EBI);

  Tool FASTA_EBI;
  FASTA_EBI.id = "FASTA_EBI";
  FASTA_EBI.operations = {"FASTA_EBI"};
  FASTA_EBI.type = "tool";

  FASTA_EBI.inTypes = {};
  FASTA_EBI.inTypes.push_back("http://edamontology.org/data_0857");
  sort (FASTA_EBI.inTypes.begin(),FASTA_EBI.inTypes.end());
  FASTA_EBI.output = "http://edamontology.org/data_2044";
  biotools.push_back(FASTA_EBI);

  Tool Fcirc;
  Fcirc.id = "Fcirc";
  Fcirc.operations = {"Fcirc"};
  Fcirc.type = "tool";

  Fcirc.inTypes = {};
  Fcirc.inTypes.push_back("http://edamontology.org/data_2603");
  sort (Fcirc.inTypes.begin(),Fcirc.inTypes.end());
  Fcirc.output = "http://edamontology.org/data_3495";
  biotools.push_back(Fcirc);

  Tool GrapeMine;
  GrapeMine.id = "GrapeMine";
  GrapeMine.operations = {"GrapeMine"};
  GrapeMine.type = "tool";

  GrapeMine.inTypes = {};
  GrapeMine.inTypes.push_back("http://edamontology.org/data_3753");
  GrapeMine.inTypes.push_back("http://edamontology.org/data_3786");
  GrapeMine.inTypes.push_back("http://edamontology.org/data_1255");
  sort (GrapeMine.inTypes.begin(),GrapeMine.inTypes.end());
  GrapeMine.output = "http://edamontology.org/data_1255";
  GrapeMine.output = "http://edamontology.org/data_2353";
  biotools.push_back(GrapeMine);

  Tool HumanMine;
  HumanMine.id = "HumanMine";
  HumanMine.operations = {"HumanMine"};
  HumanMine.type = "tool";

  HumanMine.inTypes = {};
  HumanMine.inTypes.push_back("http://edamontology.org/data_3753");
  HumanMine.inTypes.push_back("http://edamontology.org/data_3786");
  HumanMine.inTypes.push_back("http://edamontology.org/data_1255");
  sort (HumanMine.inTypes.begin(),HumanMine.inTypes.end());
  HumanMine.output = "http://edamontology.org/data_1255";
  HumanMine.output = "http://edamontology.org/data_2353";
  biotools.push_back(HumanMine);

  Tool HymenopteraMine;
  HymenopteraMine.id = "HymenopteraMine";
  HymenopteraMine.operations = {"HymenopteraMine"};
  HymenopteraMine.type = "tool";

  HymenopteraMine.inTypes = {};
  HymenopteraMine.inTypes.push_back("http://edamontology.org/data_3753");
  HymenopteraMine.inTypes.push_back("http://edamontology.org/data_3786");
  HymenopteraMine.inTypes.push_back("http://edamontology.org/data_1255");
  sort (HymenopteraMine.inTypes.begin(),HymenopteraMine.inTypes.end());
  HymenopteraMine.output = "http://edamontology.org/data_1255";
  HymenopteraMine.output = "http://edamontology.org/data_2353";
  biotools.push_back(HymenopteraMine);

  Tool IMGT_2Dstructure_DB;
  IMGT_2Dstructure_DB.id = "IMGT_2Dstructure_DB";
  IMGT_2Dstructure_DB.operations = {"IMGT_2Dstructure_DB"};
  IMGT_2Dstructure_DB.type = "tool";

  IMGT_2Dstructure_DB.inTypes = {};
  IMGT_2Dstructure_DB.inTypes.push_back("http://edamontology.org/data_2955");
  IMGT_2Dstructure_DB.inTypes.push_back("http://edamontology.org/data_0863");
  sort (IMGT_2Dstructure_DB.inTypes.begin(),IMGT_2Dstructure_DB.inTypes.end());
  IMGT_2Dstructure_DB.output = "http://edamontology.org/data_0842";
  IMGT_2Dstructure_DB.output = "http://edamontology.org/data_0968";
  IMGT_2Dstructure_DB.output = "http://edamontology.org/data_2858";
  biotools.push_back(IMGT_2Dstructure_DB);

  Tool IMGT_DomainDisplay;
  IMGT_DomainDisplay.id = "IMGT_DomainDisplay";
  IMGT_DomainDisplay.operations = {"IMGT_DomainDisplay"};
  IMGT_DomainDisplay.type = "tool";

  IMGT_DomainDisplay.inTypes = {};
  IMGT_DomainDisplay.inTypes.push_back("http://edamontology.org/data_2976");
  sort (IMGT_DomainDisplay.inTypes.begin(),IMGT_DomainDisplay.inTypes.end());
  IMGT_DomainDisplay.output = "http://edamontology.org/data_0968";
  IMGT_DomainDisplay.output = "http://edamontology.org/data_0842";
  biotools.push_back(IMGT_DomainDisplay);

  Tool IMGT_GENE_DB;
  IMGT_GENE_DB.id = "IMGT_GENE_DB";
  IMGT_GENE_DB.operations = {"IMGT_GENE_DB"};
  IMGT_GENE_DB.type = "tool";

  IMGT_GENE_DB.inTypes = {};
  IMGT_GENE_DB.inTypes.push_back("http://edamontology.org/data_2080");
  IMGT_GENE_DB.inTypes.push_back("http://edamontology.org/data_0916");
  IMGT_GENE_DB.inTypes.push_back("http://edamontology.org/data_2044");
  sort (IMGT_GENE_DB.inTypes.begin(),IMGT_GENE_DB.inTypes.end());
  IMGT_GENE_DB.output = "http://edamontology.org/data_0842";
  IMGT_GENE_DB.output = "http://edamontology.org/data_0968";
  IMGT_GENE_DB.output = "http://edamontology.org/data_2858";
  IMGT_GENE_DB.output = "http://edamontology.org/data_2299";
  biotools.push_back(IMGT_GENE_DB);

  Tool IMGT_GeneFrequency;
  IMGT_GeneFrequency.id = "IMGT_GeneFrequency";
  IMGT_GeneFrequency.operations = {"IMGT_GeneFrequency"};
  IMGT_GeneFrequency.type = "tool";

  IMGT_GeneFrequency.inTypes = {};
  IMGT_GeneFrequency.inTypes.push_back("http://edamontology.org/data_0842");
  sort (IMGT_GeneFrequency.inTypes.begin(),IMGT_GeneFrequency.inTypes.end());
  IMGT_GeneFrequency.output = "http://edamontology.org/data_0842";
  IMGT_GeneFrequency.output = "http://edamontology.org/data_0968";
  biotools.push_back(IMGT_GeneFrequency);

  Tool IMGT_GeneInfo;
  IMGT_GeneInfo.id = "IMGT_GeneInfo";
  IMGT_GeneInfo.operations = {"IMGT_GeneInfo"};
  IMGT_GeneInfo.type = "tool";

  IMGT_GeneInfo.inTypes = {};
  IMGT_GeneInfo.inTypes.push_back("http://edamontology.org/data_1278");
  IMGT_GeneInfo.inTypes.push_back("http://edamontology.org/data_2977");
  sort (IMGT_GeneInfo.inTypes.begin(),IMGT_GeneInfo.inTypes.end());
  IMGT_GeneInfo.output = "http://edamontology.org/data_0968";
  biotools.push_back(IMGT_GeneInfo);

  Tool IMGT_HighV_QUEST;
  IMGT_HighV_QUEST.id = "IMGT_HighV_QUEST";
  IMGT_HighV_QUEST.operations = {"IMGT_HighV_QUEST"};
  IMGT_HighV_QUEST.type = "tool";

  IMGT_HighV_QUEST.inTypes = {};
  IMGT_HighV_QUEST.inTypes.push_back("http://edamontology.org/data_3779");
  IMGT_HighV_QUEST.inTypes.push_back("http://edamontology.org/data_1255");
  IMGT_HighV_QUEST.inTypes.push_back("http://edamontology.org/data_2955");
  sort (IMGT_HighV_QUEST.inTypes.begin(),IMGT_HighV_QUEST.inTypes.end());
  IMGT_HighV_QUEST.output = "http://edamontology.org/data_2977";
  biotools.push_back(IMGT_HighV_QUEST);

  Tool IMGT_JunctionAnalysis;
  IMGT_JunctionAnalysis.id = "IMGT_JunctionAnalysis";
  IMGT_JunctionAnalysis.operations = {"IMGT_JunctionAnalysis"};
  IMGT_JunctionAnalysis.type = "tool";

  IMGT_JunctionAnalysis.inTypes = {};
  IMGT_JunctionAnalysis.inTypes.push_back("http://edamontology.org/data_0863");
  IMGT_JunctionAnalysis.inTypes.push_back("http://edamontology.org/data_0867");
  sort (IMGT_JunctionAnalysis.inTypes.begin(),IMGT_JunctionAnalysis.inTypes.end());
  IMGT_JunctionAnalysis.output = "http://edamontology.org/data_2977";
  biotools.push_back(IMGT_JunctionAnalysis);

  Tool IMGT_LIGM_DB;
  IMGT_LIGM_DB.id = "IMGT_LIGM_DB";
  IMGT_LIGM_DB.operations = {"IMGT_LIGM_DB"};
  IMGT_LIGM_DB.type = "tool";

  IMGT_LIGM_DB.inTypes = {};
  IMGT_LIGM_DB.inTypes.push_back("http://edamontology.org/data_2080");
  sort (IMGT_LIGM_DB.inTypes.begin(),IMGT_LIGM_DB.inTypes.end());
  IMGT_LIGM_DB.output = "http://edamontology.org/data_0842";
  IMGT_LIGM_DB.output = "http://edamontology.org/data_1103";
  IMGT_LIGM_DB.output = "http://edamontology.org/data_0968";
  IMGT_LIGM_DB.output = "http://edamontology.org/data_2858";
  biotools.push_back(IMGT_LIGM_DB);

  Tool IMGT_PRIMER_DB;
  IMGT_PRIMER_DB.id = "IMGT_PRIMER_DB";
  IMGT_PRIMER_DB.operations = {"IMGT_PRIMER_DB"};
  IMGT_PRIMER_DB.type = "tool";

  IMGT_PRIMER_DB.inTypes = {};
  IMGT_PRIMER_DB.inTypes.push_back("http://edamontology.org/data_2977");
  sort (IMGT_PRIMER_DB.inTypes.begin(),IMGT_PRIMER_DB.inTypes.end());
  IMGT_PRIMER_DB.output = "http://edamontology.org/data_2977";
  biotools.push_back(IMGT_PRIMER_DB);

  Tool IMGT_PhyloGene;
  IMGT_PhyloGene.id = "IMGT_PhyloGene";
  IMGT_PhyloGene.operations = {"IMGT_PhyloGene"};
  IMGT_PhyloGene.type = "tool";

  IMGT_PhyloGene.inTypes = {};
  IMGT_PhyloGene.inTypes.push_back("http://edamontology.org/data_2523");
  IMGT_PhyloGene.inTypes.push_back("http://edamontology.org/data_0867");
  sort (IMGT_PhyloGene.inTypes.begin(),IMGT_PhyloGene.inTypes.end());
  IMGT_PhyloGene.output = "http://edamontology.org/data_0968";
  IMGT_PhyloGene.output = "http://edamontology.org/data_2299";
  IMGT_PhyloGene.output = "http://edamontology.org/data_2858";
  biotools.push_back(IMGT_PhyloGene);

  Tool IMGT_StructuralQuery;
  IMGT_StructuralQuery.id = "IMGT_StructuralQuery";
  IMGT_StructuralQuery.operations = {"IMGT_StructuralQuery"};
  IMGT_StructuralQuery.type = "tool";

  IMGT_StructuralQuery.inTypes = {};
  IMGT_StructuralQuery.inTypes.push_back("http://edamontology.org/data_0883");
  sort (IMGT_StructuralQuery.inTypes.begin(),IMGT_StructuralQuery.inTypes.end());
  IMGT_StructuralQuery.output = "http://edamontology.org/data_0968";
  biotools.push_back(IMGT_StructuralQuery);

  Tool IMGT_mAb_DB;
  IMGT_mAb_DB.id = "IMGT_mAb_DB";
  IMGT_mAb_DB.operations = {"IMGT_mAb_DB"};
  IMGT_mAb_DB.type = "tool";

  IMGT_mAb_DB.inTypes = {};
  IMGT_mAb_DB.inTypes.push_back("http://edamontology.org/data_2080");
  sort (IMGT_mAb_DB.inTypes.begin(),IMGT_mAb_DB.inTypes.end());
  IMGT_mAb_DB.output = "http://edamontology.org/data_0842";
  biotools.push_back(IMGT_mAb_DB);

  Tool IndigoMine;
  IndigoMine.id = "IndigoMine";
  IndigoMine.operations = {"IndigoMine"};
  IndigoMine.type = "tool";

  IndigoMine.inTypes = {};
  IndigoMine.inTypes.push_back("http://edamontology.org/data_3753");
  IndigoMine.inTypes.push_back("http://edamontology.org/data_3786");
  IndigoMine.inTypes.push_back("http://edamontology.org/data_1255");
  sort (IndigoMine.inTypes.begin(),IndigoMine.inTypes.end());
  IndigoMine.output = "http://edamontology.org/data_1255";
  IndigoMine.output = "http://edamontology.org/data_2353";
  biotools.push_back(IndigoMine);

  Tool LegumeMine;
  LegumeMine.id = "LegumeMine";
  LegumeMine.operations = {"LegumeMine"};
  LegumeMine.type = "tool";

  LegumeMine.inTypes = {};
  LegumeMine.inTypes.push_back("http://edamontology.org/data_3753");
  LegumeMine.inTypes.push_back("http://edamontology.org/data_3786");
  LegumeMine.inTypes.push_back("http://edamontology.org/data_1255");
  sort (LegumeMine.inTypes.begin(),LegumeMine.inTypes.end());
  LegumeMine.output = "http://edamontology.org/data_1255";
  LegumeMine.output = "http://edamontology.org/data_2353";
  biotools.push_back(LegumeMine);

  Tool LocustMine;
  LocustMine.id = "LocustMine";
  LocustMine.operations = {"LocustMine"};
  LocustMine.type = "tool";

  LocustMine.inTypes = {};
  LocustMine.inTypes.push_back("http://edamontology.org/data_3753");
  LocustMine.inTypes.push_back("http://edamontology.org/data_3786");
  LocustMine.inTypes.push_back("http://edamontology.org/data_1255");
  sort (LocustMine.inTypes.begin(),LocustMine.inTypes.end());
  LocustMine.output = "http://edamontology.org/data_1255";
  LocustMine.output = "http://edamontology.org/data_2353";
  biotools.push_back(LocustMine);

  Tool MMseqs2;
  MMseqs2.id = "MMseqs2";
  MMseqs2.operations = {"MMseqs2"};
  MMseqs2.type = "tool";

  MMseqs2.inTypes = {};
  MMseqs2.inTypes.push_back("http://edamontology.org/data_0857");
  sort (MMseqs2.inTypes.begin(),MMseqs2.inTypes.end());
  MMseqs2.output = "http://edamontology.org/data_0850";
  biotools.push_back(MMseqs2);

  Tool MaizeMine;
  MaizeMine.id = "MaizeMine";
  MaizeMine.operations = {"MaizeMine"};
  MaizeMine.type = "tool";

  MaizeMine.inTypes = {};
  MaizeMine.inTypes.push_back("http://edamontology.org/data_3753");
  MaizeMine.inTypes.push_back("http://edamontology.org/data_3786");
  MaizeMine.inTypes.push_back("http://edamontology.org/data_1255");
  sort (MaizeMine.inTypes.begin(),MaizeMine.inTypes.end());
  MaizeMine.output = "http://edamontology.org/data_1255";
  MaizeMine.output = "http://edamontology.org/data_2353";
  biotools.push_back(MaizeMine);

  Tool MedicMine;
  MedicMine.id = "MedicMine";
  MedicMine.operations = {"MedicMine"};
  MedicMine.type = "tool";

  MedicMine.inTypes = {};
  MedicMine.inTypes.push_back("http://edamontology.org/data_3753");
  MedicMine.inTypes.push_back("http://edamontology.org/data_3786");
  MedicMine.inTypes.push_back("http://edamontology.org/data_1255");
  sort (MedicMine.inTypes.begin(),MedicMine.inTypes.end());
  MedicMine.output = "http://edamontology.org/data_1255";
  MedicMine.output = "http://edamontology.org/data_2353";
  biotools.push_back(MedicMine);

  Tool MiXCR;
  MiXCR.id = "MiXCR";
  MiXCR.operations = {"MiXCR"};
  MiXCR.type = "tool";

  MiXCR.inTypes = {};
  MiXCR.inTypes.push_back("http://edamontology.org/data_2048");
  sort (MiXCR.inTypes.begin(),MiXCR.inTypes.end());
  MiXCR.output = "http://edamontology.org/data_2044";
  biotools.push_back(MiXCR);

  Tool MicroScope_platform;
  MicroScope_platform.id = "MicroScope_platform";
  MicroScope_platform.operations = {"MicroScope_platform"};
  MicroScope_platform.type = "tool";

  MicroScope_platform.inTypes = {};
  MicroScope_platform.inTypes.push_back("http://edamontology.org/data_3002");
  sort (MicroScope_platform.inTypes.begin(),MicroScope_platform.inTypes.end());
  MicroScope_platform.output = "http://edamontology.org/data_0925";
  MicroScope_platform.output = "http://edamontology.org/data_1098";
  biotools.push_back(MicroScope_platform);

  Tool ModMine;
  ModMine.id = "ModMine";
  ModMine.operations = {"ModMine"};
  ModMine.type = "tool";

  ModMine.inTypes = {};
  ModMine.inTypes.push_back("http://edamontology.org/data_3753");
  ModMine.inTypes.push_back("http://edamontology.org/data_3786");
  ModMine.inTypes.push_back("http://edamontology.org/data_1255");
  sort (ModMine.inTypes.begin(),ModMine.inTypes.end());
  ModMine.output = "http://edamontology.org/data_1255";
  ModMine.output = "http://edamontology.org/data_2353";
  biotools.push_back(ModMine);

  Tool OakMine;
  OakMine.id = "OakMine";
  OakMine.operations = {"OakMine"};
  OakMine.type = "tool";

  OakMine.inTypes = {};
  OakMine.inTypes.push_back("http://edamontology.org/data_3753");
  OakMine.inTypes.push_back("http://edamontology.org/data_3786");
  OakMine.inTypes.push_back("http://edamontology.org/data_1255");
  sort (OakMine.inTypes.begin(),OakMine.inTypes.end());
  OakMine.output = "http://edamontology.org/data_1255";
  OakMine.output = "http://edamontology.org/data_2353";
  biotools.push_back(OakMine);

  Tool Ocean_Gene_Atlas;
  Ocean_Gene_Atlas.id = "Ocean_Gene_Atlas";
  Ocean_Gene_Atlas.operations = {"Ocean_Gene_Atlas"};
  Ocean_Gene_Atlas.type = "tool";

  Ocean_Gene_Atlas.inTypes = {};
  Ocean_Gene_Atlas.inTypes.push_back("http://edamontology.org/data_0863");
  Ocean_Gene_Atlas.inTypes.push_back("http://edamontology.org/data_2977");
  Ocean_Gene_Atlas.inTypes.push_back("http://edamontology.org/data_2976");
  Ocean_Gene_Atlas.inTypes.push_back("http://edamontology.org/data_0872");
  Ocean_Gene_Atlas.inTypes.push_back("http://edamontology.org/data_0857");
  Ocean_Gene_Atlas.inTypes.push_back("http://edamontology.org/data_3736");
  Ocean_Gene_Atlas.inTypes.push_back("http://edamontology.org/data_2884");
  Ocean_Gene_Atlas.inTypes.push_back("http://edamontology.org/data_2968");
  sort (Ocean_Gene_Atlas.inTypes.begin(),Ocean_Gene_Atlas.inTypes.end());
  Ocean_Gene_Atlas.output = "http://edamontology.org/data_2977";
  Ocean_Gene_Atlas.output = "http://edamontology.org/data_2976";
  Ocean_Gene_Atlas.output = "http://edamontology.org/data_1364";
  Ocean_Gene_Atlas.output = "http://edamontology.org/data_1138";
  Ocean_Gene_Atlas.output = "http://edamontology.org/data_2295";
  biotools.push_back(Ocean_Gene_Atlas);

  Tool PathwayCommons_SPARQL_endpoint;
  PathwayCommons_SPARQL_endpoint.id = "PathwayCommons_SPARQL_endpoint";
  PathwayCommons_SPARQL_endpoint.operations = {"PathwayCommons_SPARQL_endpoint"};
  PathwayCommons_SPARQL_endpoint.type = "tool";

  PathwayCommons_SPARQL_endpoint.inTypes = {};
  PathwayCommons_SPARQL_endpoint.inTypes.push_back("http://edamontology.org/data_2600");
  sort (PathwayCommons_SPARQL_endpoint.inTypes.begin(),PathwayCommons_SPARQL_endpoint.inTypes.end());
  PathwayCommons_SPARQL_endpoint.output = "http://edamontology.org/data_3786";
  biotools.push_back(PathwayCommons_SPARQL_endpoint);

  Tool PeanutMine;
  PeanutMine.id = "PeanutMine";
  PeanutMine.operations = {"PeanutMine"};
  PeanutMine.type = "tool";

  PeanutMine.inTypes = {};
  PeanutMine.inTypes.push_back("http://edamontology.org/data_3753");
  PeanutMine.inTypes.push_back("http://edamontology.org/data_3786");
  PeanutMine.inTypes.push_back("http://edamontology.org/data_1255");
  sort (PeanutMine.inTypes.begin(),PeanutMine.inTypes.end());
  PeanutMine.output = "http://edamontology.org/data_1255";
  PeanutMine.output = "http://edamontology.org/data_2353";
  biotools.push_back(PeanutMine);

  Tool PhytoMine;
  PhytoMine.id = "PhytoMine";
  PhytoMine.operations = {"PhytoMine"};
  PhytoMine.type = "tool";

  PhytoMine.inTypes = {};
  PhytoMine.inTypes.push_back("http://edamontology.org/data_3753");
  PhytoMine.inTypes.push_back("http://edamontology.org/data_3786");
  PhytoMine.inTypes.push_back("http://edamontology.org/data_1255");
  sort (PhytoMine.inTypes.begin(),PhytoMine.inTypes.end());
  PhytoMine.output = "http://edamontology.org/data_1255";
  PhytoMine.output = "http://edamontology.org/data_2353";
  biotools.push_back(PhytoMine);

  Tool PlanMine;
  PlanMine.id = "PlanMine";
  PlanMine.operations = {"PlanMine"};
  PlanMine.type = "tool";

  PlanMine.inTypes = {};
  PlanMine.inTypes.push_back("http://edamontology.org/data_3753");
  PlanMine.inTypes.push_back("http://edamontology.org/data_3786");
  PlanMine.inTypes.push_back("http://edamontology.org/data_1255");
  sort (PlanMine.inTypes.begin(),PlanMine.inTypes.end());
  PlanMine.output = "http://edamontology.org/data_1255";
  PlanMine.output = "http://edamontology.org/data_2353";
  biotools.push_back(PlanMine);

  Tool Proteo3Dnet;
  Proteo3Dnet.id = "Proteo3Dnet";
  Proteo3Dnet.operations = {"Proteo3Dnet"};
  Proteo3Dnet.type = "tool";

  Proteo3Dnet.inTypes = {};
  Proteo3Dnet.inTypes.push_back("http://edamontology.org/data_2600");
  Proteo3Dnet.inTypes.push_back("http://edamontology.org/data_3021");
  Proteo3Dnet.inTypes.push_back("http://edamontology.org/data_1127");
  Proteo3Dnet.inTypes.push_back("http://edamontology.org/data_2628");
  sort (Proteo3Dnet.inTypes.begin(),Proteo3Dnet.inTypes.end());
  Proteo3Dnet.output = "http://edamontology.org/data_3021";
  Proteo3Dnet.output = "http://edamontology.org/data_2976";
  biotools.push_back(Proteo3Dnet);

  Tool Query_Tabular;
  Query_Tabular.id = "Query_Tabular";
  Query_Tabular.operations = {"Query_Tabular"};
  Query_Tabular.type = "tool";

  Query_Tabular.inTypes = {};
  Query_Tabular.inTypes.push_back("http://edamontology.org/data_3671");
  sort (Query_Tabular.inTypes.begin(),Query_Tabular.inTypes.end());
  Query_Tabular.output = "http://edamontology.org/data_3671";
  biotools.push_back(Query_Tabular);

  Tool RatMine;
  RatMine.id = "RatMine";
  RatMine.operations = {"RatMine"};
  RatMine.type = "tool";

  RatMine.inTypes = {};
  RatMine.inTypes.push_back("http://edamontology.org/data_3753");
  RatMine.inTypes.push_back("http://edamontology.org/data_3786");
  RatMine.inTypes.push_back("http://edamontology.org/data_1255");
  sort (RatMine.inTypes.begin(),RatMine.inTypes.end());
  RatMine.output = "http://edamontology.org/data_1255";
  RatMine.output = "http://edamontology.org/data_2353";
  biotools.push_back(RatMine);

  Tool RepetDB;
  RepetDB.id = "RepetDB";
  RepetDB.operations = {"RepetDB"};
  RepetDB.type = "tool";

  RepetDB.inTypes = {};
  RepetDB.inTypes.push_back("http://edamontology.org/data_3753");
  RepetDB.inTypes.push_back("http://edamontology.org/data_3786");
  RepetDB.inTypes.push_back("http://edamontology.org/data_1255");
  sort (RepetDB.inTypes.begin(),RepetDB.inTypes.end());
  RepetDB.output = "http://edamontology.org/data_1255";
  RepetDB.output = "http://edamontology.org/data_2353";
  biotools.push_back(RepetDB);

  Tool SoyMine;
  SoyMine.id = "SoyMine";
  SoyMine.operations = {"SoyMine"};
  SoyMine.type = "tool";

  SoyMine.inTypes = {};
  SoyMine.inTypes.push_back("http://edamontology.org/data_3753");
  SoyMine.inTypes.push_back("http://edamontology.org/data_3786");
  SoyMine.inTypes.push_back("http://edamontology.org/data_1255");
  sort (SoyMine.inTypes.begin(),SoyMine.inTypes.end());
  SoyMine.output = "http://edamontology.org/data_1255";
  SoyMine.output = "http://edamontology.org/data_2353";
  biotools.push_back(SoyMine);

  Tool TARA_BLAST_Service;
  TARA_BLAST_Service.id = "TARA_BLAST_Service";
  TARA_BLAST_Service.operations = {"TARA_BLAST_Service"};
  TARA_BLAST_Service.type = "tool";

  TARA_BLAST_Service.inTypes = {};
  TARA_BLAST_Service.inTypes.push_back("http://edamontology.org/data_0857");
  sort (TARA_BLAST_Service.inTypes.begin(),TARA_BLAST_Service.inTypes.end());
  TARA_BLAST_Service.output = "http://edamontology.org/data_2044";
  biotools.push_back(TARA_BLAST_Service);

  Tool ThaleMine;
  ThaleMine.id = "ThaleMine";
  ThaleMine.operations = {"ThaleMine"};
  ThaleMine.type = "tool";

  ThaleMine.inTypes = {};
  ThaleMine.inTypes.push_back("http://edamontology.org/data_3753");
  ThaleMine.inTypes.push_back("http://edamontology.org/data_3786");
  ThaleMine.inTypes.push_back("http://edamontology.org/data_1255");
  sort (ThaleMine.inTypes.begin(),ThaleMine.inTypes.end());
  ThaleMine.output = "http://edamontology.org/data_1255";
  ThaleMine.output = "http://edamontology.org/data_2353";
  biotools.push_back(ThaleMine);

  Tool WheatMine;
  WheatMine.id = "WheatMine";
  WheatMine.operations = {"WheatMine"};
  WheatMine.type = "tool";

  WheatMine.inTypes = {};
  WheatMine.inTypes.push_back("http://edamontology.org/data_3753");
  WheatMine.inTypes.push_back("http://edamontology.org/data_3786");
  WheatMine.inTypes.push_back("http://edamontology.org/data_1255");
  sort (WheatMine.inTypes.begin(),WheatMine.inTypes.end());
  WheatMine.output = "http://edamontology.org/data_1255";
  WheatMine.output = "http://edamontology.org/data_2353";
  biotools.push_back(WheatMine);

  Tool WormMine;
  WormMine.id = "WormMine";
  WormMine.operations = {"WormMine"};
  WormMine.type = "tool";

  WormMine.inTypes = {};
  WormMine.inTypes.push_back("http://edamontology.org/data_3753");
  WormMine.inTypes.push_back("http://edamontology.org/data_3786");
  WormMine.inTypes.push_back("http://edamontology.org/data_1255");
  sort (WormMine.inTypes.begin(),WormMine.inTypes.end());
  WormMine.output = "http://edamontology.org/data_1255";
  WormMine.output = "http://edamontology.org/data_2353";
  biotools.push_back(WormMine);

  Tool XenMine;
  XenMine.id = "XenMine";
  XenMine.operations = {"XenMine"};
  XenMine.type = "tool";

  XenMine.inTypes = {};
  XenMine.inTypes.push_back("http://edamontology.org/data_3753");
  XenMine.inTypes.push_back("http://edamontology.org/data_3786");
  XenMine.inTypes.push_back("http://edamontology.org/data_1255");
  sort (XenMine.inTypes.begin(),XenMine.inTypes.end());
  XenMine.output = "http://edamontology.org/data_1255";
  XenMine.output = "http://edamontology.org/data_2353";
  biotools.push_back(XenMine);

  Tool YeastMine;
  YeastMine.id = "YeastMine";
  YeastMine.operations = {"YeastMine"};
  YeastMine.type = "tool";

  YeastMine.inTypes = {};
  YeastMine.inTypes.push_back("http://edamontology.org/data_3753");
  YeastMine.inTypes.push_back("http://edamontology.org/data_3786");
  YeastMine.inTypes.push_back("http://edamontology.org/data_1255");
  sort (YeastMine.inTypes.begin(),YeastMine.inTypes.end());
  YeastMine.output = "http://edamontology.org/data_1255";
  YeastMine.output = "http://edamontology.org/data_2353";
  biotools.push_back(YeastMine);

  Tool ZebrafishMine;
  ZebrafishMine.id = "ZebrafishMine";
  ZebrafishMine.operations = {"ZebrafishMine"};
  ZebrafishMine.type = "tool";

  ZebrafishMine.inTypes = {};
  ZebrafishMine.inTypes.push_back("http://edamontology.org/data_3753");
  ZebrafishMine.inTypes.push_back("http://edamontology.org/data_3786");
  ZebrafishMine.inTypes.push_back("http://edamontology.org/data_1255");
  sort (ZebrafishMine.inTypes.begin(),ZebrafishMine.inTypes.end());
  ZebrafishMine.output = "http://edamontology.org/data_1255";
  ZebrafishMine.output = "http://edamontology.org/data_2353";
  biotools.push_back(ZebrafishMine);

  Tool abs;
  abs.id = "abs";
  abs.operations = {"abs"};
  abs.type = "tool";

  abs.inTypes = {};
  abs.inTypes.push_back("http://edamontology.org/data_1276");
  sort (abs.inTypes.begin(),abs.inTypes.end());
  abs.output = "http://edamontology.org/data_2741";
  abs.output = "http://edamontology.org/data_1077";
  abs.output = "http://edamontology.org/data_2299";
  biotools.push_back(abs);

  Tool aceview;
  aceview.id = "aceview";
  aceview.operations = {"aceview"};
  aceview.type = "tool";

  aceview.inTypes = {};
  aceview.inTypes.push_back("http://edamontology.org/data_0916");
  sort (aceview.inTypes.begin(),aceview.inTypes.end());
  aceview.output = "http://edamontology.org/data_1045";
  aceview.output = "http://edamontology.org/data_1026";
  biotools.push_back(aceview);

  Tool action;
  action.id = "action";
  action.operations = {"action"};
  action.type = "tool";

  action.inTypes = {};
  action.inTypes.push_back("http://edamontology.org/data_2600");
  sort (action.inTypes.begin(),action.inTypes.end());
  action.output = "http://edamontology.org/data_3112";
  biotools.push_back(action);

  Tool aftol;
  aftol.id = "aftol";
  aftol.operations = {"aftol"};
  aftol.type = "tool";

  aftol.inTypes = {};
  aftol.inTypes.push_back("http://edamontology.org/data_2530");
  sort (aftol.inTypes.begin(),aftol.inTypes.end());
  aftol.output = "http://edamontology.org/data_1870";
  aftol.output = "http://edamontology.org/data_1045";
  biotools.push_back(aftol);

  Tool akid;
  akid.id = "akid";
  akid.operations = {"akid"};
  akid.type = "tool";

  akid.inTypes = {};
  akid.inTypes.push_back("http://edamontology.org/data_1277");
  sort (akid.inTypes.begin(),akid.inTypes.end());
  akid.output = "http://edamontology.org/data_2974";
  biotools.push_back(akid);

  Tool alfred;
  alfred.id = "alfred";
  alfred.operations = {"alfred"};
  alfred.type = "tool";

  alfred.inTypes = {};
  alfred.inTypes.push_back("http://edamontology.org/data_2526");
  sort (alfred.inTypes.begin(),alfred.inTypes.end());
  alfred.output = "http://edamontology.org/data_1916";
  biotools.push_back(alfred);

  Tool alignmentcomparator;
  alignmentcomparator.id = "alignmentcomparator";
  alignmentcomparator.operations = {"alignmentcomparator"};
  alignmentcomparator.type = "tool";

  alignmentcomparator.inTypes = {};
  alignmentcomparator.inTypes.push_back("http://edamontology.org/data_0863");
  sort (alignmentcomparator.inTypes.begin(),alignmentcomparator.inTypes.end());
  alignmentcomparator.output = "http://edamontology.org/data_0863";
  biotools.push_back(alignmentcomparator);

  Tool allergome;
  allergome.id = "allergome";
  allergome.operations = {"allergome"};
  allergome.type = "tool";

  allergome.inTypes = {};
  allergome.inTypes.push_back("http://edamontology.org/data_2048");
  sort (allergome.inTypes.begin(),allergome.inTypes.end());
  allergome.output = "http://edamontology.org/data_0842";
  biotools.push_back(allergome);

  Tool amped;
  amped.id = "amped";
  amped.operations = {"amped"};
  amped.type = "tool";

  amped.inTypes = {};
  amped.inTypes.push_back("http://edamontology.org/data_0850");
  sort (amped.inTypes.begin(),amped.inTypes.end());
  amped.output = "http://edamontology.org/data_2531";
  biotools.push_back(amped);

  Tool amypdb;
  amypdb.id = "amypdb";
  amypdb.operations = {"amypdb"};
  amypdb.type = "tool";

  amypdb.inTypes = {};
  amypdb.inTypes.push_back("http://edamontology.org/data_1233");
  sort (amypdb.inTypes.begin(),amypdb.inTypes.end());
  amypdb.output = "http://edamontology.org/data_1093";
  amypdb.output = "http://edamontology.org/data_2976";
  biotools.push_back(amypdb);

  Tool aramemnon;
  aramemnon.id = "aramemnon";
  aramemnon.operations = {"aramemnon"};
  aramemnon.type = "tool";

  aramemnon.inTypes = {};
  aramemnon.inTypes.push_back("http://edamontology.org/data_1277");
  sort (aramemnon.inTypes.begin(),aramemnon.inTypes.end());
  aramemnon.output = "http://edamontology.org/data_1895";
  biotools.push_back(aramemnon);

  Tool artic;
  artic.id = "artic";
  artic.operations = {"artic"};
  artic.type = "tool";

  artic.inTypes = {};
  artic.inTypes.push_back("http://edamontology.org/data_1383");
  artic.inTypes.push_back("http://edamontology.org/data_3498");
  sort (artic.inTypes.begin(),artic.inTypes.end());
  artic.output = "http://edamontology.org/data_3494";
  artic.output = "http://edamontology.org/data_2012";
  biotools.push_back(artic);

  Tool askomics;
  askomics.id = "askomics";
  askomics.operations = {"askomics"};
  askomics.type = "tool";

  askomics.inTypes = {};
  askomics.inTypes.push_back("http://edamontology.org/data_0006");
  sort (askomics.inTypes.begin(),askomics.inTypes.end());
  askomics.output = "http://edamontology.org/data_1255";
  askomics.output = "http://edamontology.org/data_2353";
  askomics.output = "http://edamontology.org/data_2526";
  biotools.push_back(askomics);

  Tool aspicdb;
  aspicdb.id = "aspicdb";
  aspicdb.operations = {"aspicdb"};
  aspicdb.type = "tool";

  aspicdb.inTypes = {};
  aspicdb.inTypes.push_back("http://edamontology.org/data_3134");
  sort (aspicdb.inTypes.begin(),aspicdb.inTypes.end());
  aspicdb.output = "http://edamontology.org/data_1026";
  aspicdb.output = "http://edamontology.org/data_0968";
  aspicdb.output = "http://edamontology.org/data_0582";
  biotools.push_back(aspicdb);

  Tool assemblyget;
  assemblyget.id = "assemblyget";
  assemblyget.operations = {"assemblyget"};
  assemblyget.type = "tool";

  assemblyget.inTypes = {};
  assemblyget.inTypes.push_back("http://edamontology.org/data_0849");
  sort (assemblyget.inTypes.begin(),assemblyget.inTypes.end());
  assemblyget.output = "http://edamontology.org/data_0925";
  biotools.push_back(assemblyget);

  Tool astd;
  astd.id = "astd";
  astd.operations = {"astd"};
  astd.type = "tool";

  astd.inTypes = {};
  astd.inTypes.push_back("http://edamontology.org/data_0916");
  sort (astd.inTypes.begin(),astd.inTypes.end());
  astd.output = "http://edamontology.org/data_1033";
  biotools.push_back(astd);

  Tool atcc;
  atcc.id = "atcc";
  atcc.operations = {"atcc"};
  atcc.type = "tool";

  atcc.inTypes = {};
  atcc.inTypes.push_back("http://edamontology.org/data_0963");
  sort (atcc.inTypes.begin(),atcc.inTypes.end());
  atcc.output = "http://edamontology.org/data_0842";
  biotools.push_back(atcc);

  Tool atlasgeneticsoncology;
  atlasgeneticsoncology.id = "atlasgeneticsoncology";
  atlasgeneticsoncology.operations = {"atlasgeneticsoncology"};
  atlasgeneticsoncology.type = "tool";

  atlasgeneticsoncology.inTypes = {};
  atlasgeneticsoncology.inTypes.push_back("http://edamontology.org/data_0971");
  sort (atlasgeneticsoncology.inTypes.begin(),atlasgeneticsoncology.inTypes.end());
  atlasgeneticsoncology.output = "http://edamontology.org/data_2080";
  biotools.push_back(atlasgeneticsoncology);

  Tool babelomics;
  babelomics.id = "babelomics";
  babelomics.operations = {"babelomics"};
  babelomics.type = "tool";

  babelomics.inTypes = {};
  babelomics.inTypes.push_back("http://edamontology.org/data_0582");
  babelomics.inTypes.push_back("http://edamontology.org/data_1636");
  babelomics.inTypes.push_back("http://edamontology.org/data_2884");
  sort (babelomics.inTypes.begin(),babelomics.inTypes.end());
  babelomics.output = "http://edamontology.org/data_3112";
  babelomics.output = "http://edamontology.org/data_3110";
  babelomics.output = "http://edamontology.org/data_2872";
  babelomics.output = "http://edamontology.org/data_2082";
  biotools.push_back(babelomics);

  Tool bar;
  bar.id = "bar";
  bar.operations = {"bar"};
  bar.type = "tool";

  bar.inTypes = {};
  bar.inTypes.push_back("http://edamontology.org/data_2048");
  bar.inTypes.push_back("http://edamontology.org/data_3028");
  sort (bar.inTypes.begin(),bar.inTypes.end());
  bar.output = "http://edamontology.org/data_3021";
  biotools.push_back(bar);

  Tool base;
  base.id = "base";
  base.operations = {"base"};
  base.type = "tool";

  base.inTypes = {};
  base.inTypes.push_back("http://edamontology.org/data_2603");
  sort (base.inTypes.begin(),base.inTypes.end());
  base.output = "http://edamontology.org/data_2603";
  biotools.push_back(base);

  Tool bcheck_rnpb;
  bcheck_rnpb.id = "bcheck_rnpb";
  bcheck_rnpb.operations = {"bcheck_rnpb"};
  bcheck_rnpb.type = "tool";

  bcheck_rnpb.inTypes = {};
  bcheck_rnpb.inTypes.push_back("http://edamontology.org/data_3496");
  sort (bcheck_rnpb.inTypes.begin(),bcheck_rnpb.inTypes.end());
  bcheck_rnpb.output = "http://edamontology.org/data_3497";
  biotools.push_back(bcheck_rnpb);

  Tool bedtools_bamtobed;
  bedtools_bamtobed.id = "bedtools_bamtobed";
  bedtools_bamtobed.operations = {"bedtools_bamtobed"};
  bedtools_bamtobed.type = "tool";

  bedtools_bamtobed.inTypes = {};
  bedtools_bamtobed.inTypes.push_back("http://edamontology.org/data_3002");
  sort (bedtools_bamtobed.inTypes.begin(),bedtools_bamtobed.inTypes.end());
  bedtools_bamtobed.output = "http://edamontology.org/data_0924";
  biotools.push_back(bedtools_bamtobed);

  Tool bedtools_intersectbed_bam;
  bedtools_intersectbed_bam.id = "bedtools_intersectbed_bam";
  bedtools_intersectbed_bam.operations = {"bedtools_intersectbed_bam"};
  bedtools_intersectbed_bam.type = "tool";

  bedtools_intersectbed_bam.inTypes = {};
  bedtools_intersectbed_bam.inTypes.push_back("http://edamontology.org/data_0924");
  sort (bedtools_intersectbed_bam.inTypes.begin(),bedtools_intersectbed_bam.inTypes.end());
  bedtools_intersectbed_bam.output = "http://edamontology.org/data_0924";
  bedtools_intersectbed_bam.output = "http://edamontology.org/data_3002";
  biotools.push_back(bedtools_intersectbed_bam);

  Tool bgee;
  bgee.id = "bgee";
  bgee.operations = {"bgee"};
  bgee.type = "tool";

  bgee.inTypes = {};
  bgee.inTypes.push_back("http://edamontology.org/data_0916");
  bgee.inTypes.push_back("http://edamontology.org/data_0928");
  bgee.inTypes.push_back("http://edamontology.org/data_2603");
  sort (bgee.inTypes.begin(),bgee.inTypes.end());
  bgee.output = "http://edamontology.org/data_3021";
  bgee.output = "http://edamontology.org/data_1033";
  bgee.output = "http://edamontology.org/data_2299";
  biotools.push_back(bgee);

  Tool bindingdb;
  bindingdb.id = "bindingdb";
  bindingdb.operations = {"bindingdb"};
  bindingdb.type = "tool";

  bindingdb.inTypes = {};
  bindingdb.inTypes.push_back("http://edamontology.org/data_1566");
  sort (bindingdb.inTypes.begin(),bindingdb.inTypes.end());
  bindingdb.output = "http://edamontology.org/data_3021";
  biotools.push_back(bindingdb);

  Tool biobb;
  biobb.id = "biobb";
  biobb.operations = {"biobb"};
  biobb.type = "tool";

  biobb.inTypes = {};
  biobb.inTypes.push_back("http://edamontology.org/data_3842");
  sort (biobb.inTypes.begin(),biobb.inTypes.end());
  biobb.output = "http://edamontology.org/data_0883";
  biotools.push_back(biobb);

  Tool biogrid;
  biogrid.id = "biogrid";
  biogrid.operations = {"biogrid"};
  biogrid.type = "tool";

  biogrid.inTypes = {};
  biogrid.inTypes.push_back("http://edamontology.org/data_2044");
  sort (biogrid.inTypes.begin(),biogrid.inTypes.end());
  biogrid.output = "http://edamontology.org/data_1276";
  biotools.push_back(biogrid);

  Tool bionda;
  bionda.id = "bionda";
  bionda.operations = {"bionda"};
  bionda.type = "tool";

  bionda.inTypes = {};
  bionda.inTypes.push_back("http://edamontology.org/data_2526");
  bionda.inTypes.push_back("http://edamontology.org/data_2526");
  sort (bionda.inTypes.begin(),bionda.inTypes.end());
  bionda.output = "http://edamontology.org/data_2353";
  bionda.output = "http://edamontology.org/data_2091";
  bionda.output = "http://edamontology.org/data_0976";
  bionda.output = "http://edamontology.org/data_2007";
  bionda.output = "http://edamontology.org/data_2099";
  biotools.push_back(bionda);

  Tool bionode;
  bionode.id = "bionode";
  bionode.operations = {"bionode"};
  bionode.type = "tool";

  bionode.inTypes = {};
  bionode.inTypes.push_back("http://edamontology.org/data_2526");
  sort (bionode.inTypes.begin(),bionode.inTypes.end());
  bionode.output = "http://edamontology.org/data_2526";
  biotools.push_back(bionode);

  Tool bipa;
  bipa.id = "bipa";
  bipa.operations = {"bipa"};
  bipa.type = "tool";

  bipa.inTypes = {};
  bipa.inTypes.push_back("http://edamontology.org/data_0906");
  sort (bipa.inTypes.begin(),bipa.inTypes.end());
  bipa.output = "http://edamontology.org/data_1127";
  biotools.push_back(bipa);

  Tool bips;
  bips.id = "bips";
  bips.operations = {"bips"};
  bips.type = "tool";

  bips.inTypes = {};
  bips.inTypes.push_back("http://edamontology.org/data_2600");
  sort (bips.inTypes.begin(),bips.inTypes.end());
  bips.output = "http://edamontology.org/data_2974";
  biotools.push_back(bips);

  Tool birte;
  birte.id = "birte";
  birte.operations = {"birte"};
  birte.type = "tool";

  birte.inTypes = {};
  birte.inTypes.push_back("http://edamontology.org/data_2600");
  sort (birte.inTypes.begin(),birte.inTypes.end());
  birte.output = "http://edamontology.org/data_2600";
  birte.output = "http://edamontology.org/data_1234";
  biotools.push_back(birte);

  Tool blackfan_anemia;
  blackfan_anemia.id = "blackfan_anemia";
  blackfan_anemia.operations = {"blackfan_anemia"};
  blackfan_anemia.type = "tool";

  blackfan_anemia.inTypes = {};
  blackfan_anemia.inTypes.push_back("http://edamontology.org/data_0916");
  sort (blackfan_anemia.inTypes.begin(),blackfan_anemia.inTypes.end());
  blackfan_anemia.output = "http://edamontology.org/data_1026";
  biotools.push_back(blackfan_anemia);

  Tool blast;
  blast.id = "blast";
  blast.operations = {"blast"};
  blast.type = "tool";

  blast.inTypes = {};
  blast.inTypes.push_back("http://edamontology.org/data_0857");
  sort (blast.inTypes.begin(),blast.inTypes.end());
  blast.output = "http://edamontology.org/data_2044";
  biotools.push_back(blast);

  Tool blast2srs;
  blast2srs.id = "blast2srs";
  blast2srs.operations = {"blast2srs"};
  blast2srs.type = "tool";

  blast2srs.inTypes = {};
  blast2srs.inTypes.push_back("http://edamontology.org/data_0857");
  sort (blast2srs.inTypes.begin(),blast2srs.inTypes.end());
  blast2srs.output = "http://edamontology.org/data_2044";
  blast2srs.output = "http://edamontology.org/data_0968";
  biotools.push_back(blast2srs);

  Tool blast_api_ebi;
  blast_api_ebi.id = "blast_api_ebi";
  blast_api_ebi.operations = {"blast_api_ebi"};
  blast_api_ebi.type = "tool";

  blast_api_ebi.inTypes = {};
  blast_api_ebi.inTypes.push_back("http://edamontology.org/data_0857");
  sort (blast_api_ebi.inTypes.begin(),blast_api_ebi.inTypes.end());
  blast_api_ebi.output = "http://edamontology.org/data_2044";
  biotools.push_back(blast_api_ebi);

  Tool blast_betacoronavirus;
  blast_betacoronavirus.id = "blast_betacoronavirus";
  blast_betacoronavirus.operations = {"blast_betacoronavirus"};
  blast_betacoronavirus.type = "tool";

  blast_betacoronavirus.inTypes = {};
  blast_betacoronavirus.inTypes.push_back("http://edamontology.org/data_0857");
  sort (blast_betacoronavirus.inTypes.begin(),blast_betacoronavirus.inTypes.end());
  blast_betacoronavirus.output = "http://edamontology.org/data_2044";
  biotools.push_back(blast_betacoronavirus);

  Tool blast_ebi;
  blast_ebi.id = "blast_ebi";
  blast_ebi.operations = {"blast_ebi"};
  blast_ebi.type = "tool";

  blast_ebi.inTypes = {};
  blast_ebi.inTypes.push_back("http://edamontology.org/data_0857");
  sort (blast_ebi.inTypes.begin(),blast_ebi.inTypes.end());
  blast_ebi.output = "http://edamontology.org/data_2044";
  biotools.push_back(blast_ebi);

  Tool blast_sib;
  blast_sib.id = "blast_sib";
  blast_sib.operations = {"blast_sib"};
  blast_sib.type = "tool";

  blast_sib.inTypes = {};
  blast_sib.inTypes.push_back("http://edamontology.org/data_0857");
  sort (blast_sib.inTypes.begin(),blast_sib.inTypes.end());
  blast_sib.output = "http://edamontology.org/data_2044";
  biotools.push_back(blast_sib);

  Tool blastprodom;
  blastprodom.id = "blastprodom";
  blastprodom.operations = {"blastprodom"};
  blastprodom.type = "tool";

  blastprodom.inTypes = {};
  blastprodom.inTypes.push_back("http://edamontology.org/data_0857");
  sort (blastprodom.inTypes.begin(),blastprodom.inTypes.end());
  blastprodom.output = "http://edamontology.org/data_2044";
  biotools.push_back(blastprodom);

  Tool bowtie;
  bowtie.id = "bowtie";
  bowtie.operations = {"bowtie"};
  bowtie.type = "tool";

  bowtie.inTypes = {};
  bowtie.inTypes.push_back("http://edamontology.org/data_0924");
  bowtie.inTypes.push_back("http://edamontology.org/data_0006");
  bowtie.inTypes.push_back("http://edamontology.org/data_0006");
  sort (bowtie.inTypes.begin(),bowtie.inTypes.end());
  bowtie.output = "http://edamontology.org/data_0006";
  bowtie.output = "http://edamontology.org/data_0006";
  biotools.push_back(bowtie);

  Tool brenda;
  brenda.id = "brenda";
  brenda.operations = {"brenda"};
  brenda.type = "tool";

  brenda.inTypes = {};
  brenda.inTypes.push_back("http://edamontology.org/data_2291");
  brenda.inTypes.push_back("http://edamontology.org/data_1127");
  brenda.inTypes.push_back("http://edamontology.org/data_3021");
  brenda.inTypes.push_back("http://edamontology.org/data_2108");
  brenda.inTypes.push_back("http://edamontology.org/data_2342");
  brenda.inTypes.push_back("http://edamontology.org/data_2365");
  brenda.inTypes.push_back("http://edamontology.org/data_1046");
  brenda.inTypes.push_back("http://edamontology.org/data_2909");
  brenda.inTypes.push_back("http://edamontology.org/data_1179");
  brenda.inTypes.push_back("http://edamontology.org/data_1039");
  brenda.inTypes.push_back("http://edamontology.org/data_2700");
  brenda.inTypes.push_back("http://edamontology.org/data_1012");
  brenda.inTypes.push_back("http://edamontology.org/data_1011");
  brenda.inTypes.push_back("http://edamontology.org/data_2024");
  sort (brenda.inTypes.begin(),brenda.inTypes.end());
  brenda.output = "http://edamontology.org/data_2909";
  brenda.output = "http://edamontology.org/data_0990";
  brenda.output = "http://edamontology.org/data_2299";
  brenda.output = "http://edamontology.org/data_1127";
  brenda.output = "http://edamontology.org/data_2291";
  brenda.output = "http://edamontology.org/data_3021";
  brenda.output = "http://edamontology.org/data_2108";
  brenda.output = "http://edamontology.org/data_2342";
  brenda.output = "http://edamontology.org/data_2365";
  brenda.output = "http://edamontology.org/data_1187";
  brenda.output = "http://edamontology.org/data_1046";
  brenda.output = "http://edamontology.org/data_1179";
  brenda.output = "http://edamontology.org/data_1051";
  brenda.output = "http://edamontology.org/data_1012";
  brenda.output = "http://edamontology.org/data_1011";
  brenda.output = "http://edamontology.org/data_2024";
  biotools.push_back(brenda);

  Tool breseq_bam2aln;
  breseq_bam2aln.id = "breseq_bam2aln";
  breseq_bam2aln.operations = {"breseq_bam2aln"};
  breseq_bam2aln.type = "tool";

  breseq_bam2aln.inTypes = {};
  breseq_bam2aln.inTypes.push_back("http://edamontology.org/data_2048");
  breseq_bam2aln.inTypes.push_back("http://edamontology.org/data_0006");
  sort (breseq_bam2aln.inTypes.begin(),breseq_bam2aln.inTypes.end());
  breseq_bam2aln.output = "http://edamontology.org/data_0924";
  breseq_bam2aln.output = "http://edamontology.org/data_0863";
  biotools.push_back(breseq_bam2aln);

  Tool bridgedb;
  bridgedb.id = "bridgedb";
  bridgedb.operations = {"bridgedb"};
  bridgedb.type = "tool";

  bridgedb.inTypes = {};
  bridgedb.inTypes.push_back("http://edamontology.org/data_1025");
  sort (bridgedb.inTypes.begin(),bridgedb.inTypes.end());
  bridgedb.output = "http://edamontology.org/data_1025";
  biotools.push_back(bridgedb);

  Tool bwa;
  bwa.id = "bwa";
  bwa.operations = {"bwa"};
  bwa.type = "tool";

  bwa.inTypes = {};
  bwa.inTypes.push_back("http://edamontology.org/data_3210");
  sort (bwa.inTypes.begin(),bwa.inTypes.end());
  bwa.output = "http://edamontology.org/data_2044";
  biotools.push_back(bwa);

  Tool bwt_sw;
  bwt_sw.id = "bwt_sw";
  bwt_sw.operations = {"bwt_sw"};
  bwt_sw.type = "tool";

  bwt_sw.inTypes = {};
  bwt_sw.inTypes.push_back("http://edamontology.org/data_0857");
  sort (bwt_sw.inTypes.begin(),bwt_sw.inTypes.end());
  bwt_sw.output = "http://edamontology.org/data_2044";
  biotools.push_back(bwt_sw);

  Tool cabri;
  cabri.id = "cabri";
  cabri.operations = {"cabri"};
  cabri.type = "tool";

  cabri.inTypes = {};
  cabri.inTypes.push_back("http://edamontology.org/data_0963");
  sort (cabri.inTypes.begin(),cabri.inTypes.end());
  cabri.output = "http://edamontology.org/data_2597";
  cabri.output = "http://edamontology.org/data_2380";
  biotools.push_back(cabri);

  Tool calchas;
  calchas.id = "calchas";
  calchas.operations = {"calchas"};
  calchas.type = "tool";

  calchas.inTypes = {};
  calchas.inTypes.push_back("http://edamontology.org/data_0977");
  sort (calchas.inTypes.begin(),calchas.inTypes.end());
  calchas.output = "http://edamontology.org/data_2526";
  biotools.push_back(calchas);

  Tool catdb;
  catdb.id = "catdb";
  catdb.operations = {"catdb"};
  catdb.type = "tool";

  catdb.inTypes = {};
  catdb.inTypes.push_back("http://edamontology.org/data_0916");
  sort (catdb.inTypes.begin(),catdb.inTypes.end());
  catdb.output = "http://edamontology.org/data_2388";
  biotools.push_back(catdb);

  Tool cazy;
  cazy.id = "cazy";
  cazy.operations = {"cazy"};
  cazy.type = "tool";

  cazy.inTypes = {};
  cazy.inTypes.push_back("http://edamontology.org/data_0896");
  sort (cazy.inTypes.begin(),cazy.inTypes.end());
  cazy.output = "http://edamontology.org/data_2702";
  biotools.push_back(cazy);

  Tool ccap;
  ccap.id = "ccap";
  ccap.operations = {"ccap"};
  ccap.type = "tool";

  ccap.inTypes = {};
  ccap.inTypes.push_back("http://edamontology.org/data_0963");
  sort (ccap.inTypes.begin(),ccap.inTypes.end());
  ccap.output = "http://edamontology.org/data_2778";
  biotools.push_back(ccap);

  Tool cdd;
  cdd.id = "cdd";
  cdd.operations = {"cdd"};
  cdd.type = "tool";

  cdd.inTypes = {};
  cdd.inTypes.push_back("http://edamontology.org/data_1384");
  sort (cdd.inTypes.begin(),cdd.inTypes.end());
  cdd.output = "http://edamontology.org/data_2666";
  biotools.push_back(cdd);

  Tool cellalign;
  cellalign.id = "cellalign";
  cellalign.operations = {"cellalign"};
  cellalign.type = "tool";

  cellalign.inTypes = {};
  cellalign.inTypes.push_back("http://edamontology.org/data_0867");
  sort (cellalign.inTypes.begin(),cellalign.inTypes.end());
  cellalign.output = "http://edamontology.org/data_3112";
  cellalign.output = "http://edamontology.org/data_2337";
  biotools.push_back(cellalign);

  Tool cellcycledb;
  cellcycledb.id = "cellcycledb";
  cellcycledb.operations = {"cellcycledb"};
  cellcycledb.type = "tool";

  cellcycledb.inTypes = {};
  cellcycledb.inTypes.push_back("http://edamontology.org/data_0916");
  sort (cellcycledb.inTypes.begin(),cellcycledb.inTypes.end());
  cellcycledb.output = "http://edamontology.org/data_1026";
  biotools.push_back(cellcycledb);

  Tool cellosaurus;
  cellosaurus.id = "cellosaurus";
  cellosaurus.operations = {"cellosaurus"};
  cellosaurus.type = "tool";

  cellosaurus.inTypes = {};
  cellosaurus.inTypes.push_back("http://edamontology.org/data_0963");
  sort (cellosaurus.inTypes.begin(),cellosaurus.inTypes.end());
  cellosaurus.output = "http://edamontology.org/data_0842";
  cellosaurus.output = "http://edamontology.org/data_3671";
  biotools.push_back(cellosaurus);

  Tool chebi;
  chebi.id = "chebi";
  chebi.operations = {"chebi"};
  chebi.type = "tool";

  chebi.inTypes = {};
  chebi.inTypes.push_back("http://edamontology.org/data_0962");
  sort (chebi.inTypes.begin(),chebi.inTypes.end());
  chebi.output = "http://edamontology.org/data_1174";
  biotools.push_back(chebi);

  Tool chebi_ws;
  chebi_ws.id = "chebi_ws";
  chebi_ws.operations = {"chebi_ws"};
  chebi_ws.type = "tool";

  chebi_ws.inTypes = {};
  chebi_ws.inTypes.push_back("http://edamontology.org/data_0962");
  sort (chebi_ws.inTypes.begin(),chebi_ws.inTypes.end());
  chebi_ws.output = "http://edamontology.org/data_1174";
  biotools.push_back(chebi_ws);

  Tool chembl_biologicals_blast_search;
  chembl_biologicals_blast_search.id = "chembl_biologicals_blast_search";
  chembl_biologicals_blast_search.operations = {"chembl_biologicals_blast_search"};
  chembl_biologicals_blast_search.type = "tool";

  chembl_biologicals_blast_search.inTypes = {};
  chembl_biologicals_blast_search.inTypes.push_back("http://edamontology.org/data_0962");
  sort (chembl_biologicals_blast_search.inTypes.begin(),chembl_biologicals_blast_search.inTypes.end());
  chembl_biologicals_blast_search.output = "http://edamontology.org/data_2976";
  biotools.push_back(chembl_biologicals_blast_search);

  Tool chembl_blast_search;
  chembl_blast_search.id = "chembl_blast_search";
  chembl_blast_search.operations = {"chembl_blast_search"};
  chembl_blast_search.type = "tool";

  chembl_blast_search.inTypes = {};
  chembl_blast_search.inTypes.push_back("http://edamontology.org/data_0962");
  sort (chembl_blast_search.inTypes.begin(),chembl_blast_search.inTypes.end());
  chembl_blast_search.output = "http://edamontology.org/data_2976";
  biotools.push_back(chembl_blast_search);

  Tool citexplore;
  citexplore.id = "citexplore";
  citexplore.operations = {"citexplore"};
  citexplore.type = "tool";

  citexplore.inTypes = {};
  citexplore.inTypes.push_back("http://edamontology.org/data_3505");
  sort (citexplore.inTypes.begin(),citexplore.inTypes.end());
  citexplore.output = "http://edamontology.org/data_1187";
  biotools.push_back(citexplore);

  Tool cleanex;
  cleanex.id = "cleanex";
  cleanex.operations = {"cleanex"};
  cleanex.type = "tool";

  cleanex.inTypes = {};
  cleanex.inTypes.push_back("http://edamontology.org/data_0928");
  sort (cleanex.inTypes.begin(),cleanex.inTypes.end());
  cleanex.output = "http://edamontology.org/data_2709";
  biotools.push_back(cleanex);

  Tool clima;
  clima.id = "clima";
  clima.operations = {"clima"};
  clima.type = "tool";

  clima.inTypes = {};
  clima.inTypes.push_back("http://edamontology.org/data_0963");
  sort (clima.inTypes.begin(),clima.inTypes.end());
  clima.output = "http://edamontology.org/data_2317";
  biotools.push_back(clima);

  Tool cmd;
  cmd.id = "cmd";
  cmd.operations = {"cmd"};
  cmd.type = "tool";

  cmd.inTypes = {};
  cmd.inTypes.push_back("http://edamontology.org/data_3498");
  sort (cmd.inTypes.begin(),cmd.inTypes.end());
  cmd.output = "http://edamontology.org/data_0957";
  biotools.push_back(cmd);

  Tool cnorfeeder;
  cnorfeeder.id = "cnorfeeder";
  cnorfeeder.operations = {"cnorfeeder"};
  cnorfeeder.type = "tool";

  cnorfeeder.inTypes = {};
  cnorfeeder.inTypes.push_back("http://edamontology.org/data_2984");
  sort (cnorfeeder.inTypes.begin(),cnorfeeder.inTypes.end());
  cnorfeeder.output = "http://edamontology.org/data_2600";
  cnorfeeder.output = "http://edamontology.org/data_0905";
  biotools.push_back(cnorfeeder);

  Tool cogeme;
  cogeme.id = "cogeme";
  cogeme.operations = {"cogeme"};
  cogeme.type = "tool";

  cogeme.inTypes = {};
  cogeme.inTypes.push_back("http://edamontology.org/data_0849");
  sort (cogeme.inTypes.begin(),cogeme.inTypes.end());
  cogeme.output = "http://edamontology.org/data_2730";
  biotools.push_back(cogeme);

  Tool comparative_genometrics;
  comparative_genometrics.id = "comparative_genometrics";
  comparative_genometrics.operations = {"comparative_genometrics"};
  comparative_genometrics.type = "tool";

  comparative_genometrics.inTypes = {};
  comparative_genometrics.inTypes.push_back("http://edamontology.org/data_3128");
  sort (comparative_genometrics.inTypes.begin(),comparative_genometrics.inTypes.end());
  comparative_genometrics.output = "http://edamontology.org/data_2787";
  biotools.push_back(comparative_genometrics);

  Tool compluyeast2dpage;
  compluyeast2dpage.id = "compluyeast2dpage";
  compluyeast2dpage.operations = {"compluyeast2dpage"};
  compluyeast2dpage.type = "tool";

  compluyeast2dpage.inTypes = {};
  compluyeast2dpage.inTypes.push_back("http://edamontology.org/data_2531");
  sort (compluyeast2dpage.inTypes.begin(),compluyeast2dpage.inTypes.end());
  compluyeast2dpage.output = "http://edamontology.org/data_3021";
  biotools.push_back(compluyeast2dpage);

  Tool conoserver;
  conoserver.id = "conoserver";
  conoserver.operations = {"conoserver"};
  conoserver.type = "tool";

  conoserver.inTypes = {};
  conoserver.inTypes.push_back("http://edamontology.org/data_0896");
  sort (conoserver.inTypes.begin(),conoserver.inTypes.end());
  conoserver.output = "http://edamontology.org/data_2804";
  biotools.push_back(conoserver);

  Tool consensuspathdb;
  consensuspathdb.id = "consensuspathdb";
  consensuspathdb.operations = {"consensuspathdb"};
  consensuspathdb.type = "tool";

  consensuspathdb.inTypes = {};
  consensuspathdb.inTypes.push_back("http://edamontology.org/data_0905");
  sort (consensuspathdb.inTypes.begin(),consensuspathdb.inTypes.end());
  consensuspathdb.output = "http://edamontology.org/data_2342";
  biotools.push_back(consensuspathdb);

  Tool contigtax;
  contigtax.id = "contigtax";
  contigtax.operations = {"contigtax"};
  contigtax.type = "tool";

  contigtax.inTypes = {};
  contigtax.inTypes.push_back("http://edamontology.org/data_2526");
  sort (contigtax.inTypes.begin(),contigtax.inTypes.end());
  contigtax.output = "http://edamontology.org/data_0925";
  biotools.push_back(contigtax);

  Tool cornai;
  cornai.id = "cornai";
  cornai.operations = {"cornai"};
  cornai.type = "tool";

  cornai.inTypes = {};
  cornai.inTypes.push_back("http://edamontology.org/data_2884");
  cornai.inTypes.push_back("http://edamontology.org/data_1669");
  cornai.inTypes.push_back("http://edamontology.org/data_1636");
  cornai.inTypes.push_back("http://edamontology.org/data_2048");
  sort (cornai.inTypes.begin(),cornai.inTypes.end());
  cornai.output = "http://edamontology.org/data_3108";
  biotools.push_back(cornai);

  Tool corum;
  corum.id = "corum";
  corum.operations = {"corum"};
  corum.type = "tool";

  corum.inTypes = {};
  corum.inTypes.push_back("http://edamontology.org/data_1537");
  sort (corum.inTypes.begin(),corum.inTypes.end());
  corum.output = "http://edamontology.org/data_2713";
  biotools.push_back(corum);

  Tool cryptodb;
  cryptodb.id = "cryptodb";
  cryptodb.operations = {"cryptodb"};
  cryptodb.type = "tool";

  cryptodb.inTypes = {};
  cryptodb.inTypes.push_back("http://edamontology.org/data_0916");
  sort (cryptodb.inTypes.begin(),cryptodb.inTypes.end());
  cryptodb.output = "http://edamontology.org/data_2295";
  biotools.push_back(cryptodb);

  Tool cuticledb;
  cuticledb.id = "cuticledb";
  cuticledb.operations = {"cuticledb"};
  cuticledb.type = "tool";

  cuticledb.inTypes = {};
  cuticledb.inTypes.push_back("http://edamontology.org/data_0896");
  sort (cuticledb.inTypes.begin(),cuticledb.inTypes.end());
  cuticledb.output = "http://edamontology.org/data_2715";
  biotools.push_back(cuticledb);

  Tool cygd;
  cygd.id = "cygd";
  cygd.operations = {"cygd"};
  cygd.type = "tool";

  cygd.inTypes = {};
  cygd.inTypes.push_back("http://edamontology.org/data_0916");
  sort (cygd.inTypes.begin(),cygd.inTypes.end());
  cygd.output = "http://edamontology.org/data_1026";
  biotools.push_back(cygd);

  Tool cyp11b1;
  cyp11b1.id = "cyp11b1";
  cyp11b1.operations = {"cyp11b1"};
  cyp11b1.type = "tool";

  cyp11b1.inTypes = {};
  cyp11b1.inTypes.push_back("http://edamontology.org/data_1277");
  sort (cyp11b1.inTypes.begin(),cyp11b1.inTypes.end());
  cyp11b1.output = "http://edamontology.org/data_1277";
  biotools.push_back(cyp11b1);

  Tool cyp21;
  cyp21.id = "cyp21";
  cyp21.operations = {"cyp21"};
  cyp21.type = "tool";

  cyp21.inTypes = {};
  cyp21.inTypes.push_back("http://edamontology.org/data_1277");
  sort (cyp21.inTypes.begin(),cyp21.inTypes.end());
  cyp21.output = "http://edamontology.org/data_1277";
  biotools.push_back(cyp21);

  Tool dbd;
  dbd.id = "dbd";
  dbd.operations = {"dbd"};
  dbd.type = "tool";

  dbd.inTypes = {};
  dbd.inTypes.push_back("http://edamontology.org/data_0896");
  sort (dbd.inTypes.begin(),dbd.inTypes.end());
  dbd.output = "http://edamontology.org/data_2716";
  biotools.push_back(dbd);

  Tool dbest;
  dbest.id = "dbest";
  dbest.operations = {"dbest"};
  dbest.type = "tool";

  dbest.inTypes = {};
  dbest.inTypes.push_back("http://edamontology.org/data_0849");
  sort (dbest.inTypes.begin(),dbest.inTypes.end());
  dbest.output = "http://edamontology.org/data_1105";
  biotools.push_back(dbest);

  Tool dbsts;
  dbsts.id = "dbsts";
  dbsts.operations = {"dbsts"};
  dbsts.type = "tool";

  dbsts.inTypes = {};
  dbsts.inTypes.push_back("http://edamontology.org/data_0916");
  sort (dbsts.inTypes.begin(),dbsts.inTypes.end());
  dbsts.output = "http://edamontology.org/data_2389";
  biotools.push_back(dbsts);

  Tool dcell;
  dcell.id = "dcell";
  dcell.operations = {"dcell"};
  dcell.type = "tool";

  dcell.inTypes = {};
  dcell.inTypes.push_back("http://edamontology.org/data_2600");
  sort (dcell.inTypes.begin(),dcell.inTypes.end());
  dcell.output = "http://edamontology.org/data_0976";
  biotools.push_back(dcell);

  Tool dictybase;
  dictybase.id = "dictybase";
  dictybase.operations = {"dictybase"};
  dictybase.type = "tool";

  dictybase.inTypes = {};
  dictybase.inTypes.push_back("http://edamontology.org/data_0916");
  sort (dictybase.inTypes.begin(),dictybase.inTypes.end());
  dictybase.output = "http://edamontology.org/data_2295";
  biotools.push_back(dictybase);

  Tool dictybase_update_2011;
  dictybase_update_2011.id = "dictybase_update_2011";
  dictybase_update_2011.operations = {"dictybase_update_2011"};
  dictybase_update_2011.type = "tool";

  dictybase_update_2011.inTypes = {};
  dictybase_update_2011.inTypes.push_back("http://edamontology.org/data_0916");
  sort (dictybase_update_2011.inTypes.begin(),dictybase_update_2011.inTypes.end());
  dictybase_update_2011.output = "http://edamontology.org/data_2295";
  biotools.push_back(dictybase_update_2011);

  Tool diffusion;
  diffusion.id = "diffusion";
  diffusion.operations = {"diffusion"};
  diffusion.type = "tool";

  diffusion.inTypes = {};
  diffusion.inTypes.push_back("http://edamontology.org/data_2600");
  sort (diffusion.inTypes.begin(),diffusion.inTypes.end());
  diffusion.output = "http://edamontology.org/data_1025";
  biotools.push_back(diffusion);

  Tool digenome_seq;
  digenome_seq.id = "digenome_seq";
  digenome_seq.operations = {"digenome_seq"};
  digenome_seq.type = "tool";

  digenome_seq.inTypes = {};
  digenome_seq.inTypes.push_back("http://edamontology.org/data_1255");
  sort (digenome_seq.inTypes.begin(),digenome_seq.inTypes.end());
  digenome_seq.output = "http://edamontology.org/data_0848";
  biotools.push_back(digenome_seq);

  Tool dima;
  dima.id = "dima";
  dima.operations = {"dima"};
  dima.type = "tool";

  dima.inTypes = {};
  dima.inTypes.push_back("http://edamontology.org/data_0906");
  sort (dima.inTypes.begin(),dima.inTypes.end());
  dima.output = "http://edamontology.org/data_1138";
  biotools.push_back(dima);

  Tool diprodb;
  diprodb.id = "diprodb";
  diprodb.operations = {"diprodb"};
  diprodb.type = "tool";

  diprodb.inTypes = {};
  diprodb.inTypes.push_back("http://edamontology.org/data_3128");
  sort (diprodb.inTypes.begin(),diprodb.inTypes.end());
  diprodb.output = "http://edamontology.org/data_2048";
  biotools.push_back(diprodb);

  Tool disprot;
  disprot.id = "disprot";
  disprot.operations = {"disprot"};
  disprot.type = "tool";

  disprot.inTypes = {};
  disprot.inTypes.push_back("http://edamontology.org/data_1277");
  disprot.inTypes.push_back("http://edamontology.org/data_1537");
  sort (disprot.inTypes.begin(),disprot.inTypes.end());
  disprot.output = "http://edamontology.org/data_3021";
  disprot.output = "http://edamontology.org/data_2723";
  disprot.output = "http://edamontology.org/data_1009";
  biotools.push_back(disprot);

  Tool dpvweb;
  dpvweb.id = "dpvweb";
  dpvweb.operations = {"dpvweb"};
  dpvweb.type = "tool";

  dpvweb.inTypes = {};
  dpvweb.inTypes.push_back("http://edamontology.org/data_2530");
  sort (dpvweb.inTypes.begin(),dpvweb.inTypes.end());
  dpvweb.output = "http://edamontology.org/data_2836";
  biotools.push_back(dpvweb);

  Tool drtext;
  drtext.id = "drtext";
  drtext.operations = {"drtext"};
  drtext.type = "tool";

  drtext.inTypes = {};
  drtext.inTypes.push_back("http://edamontology.org/data_0957");
  sort (drtext.inTypes.begin(),drtext.inTypes.end());
  drtext.output = "http://edamontology.org/data_0957";
  biotools.push_back(drtext);

  Tool drugebility_blast_search;
  drugebility_blast_search.id = "drugebility_blast_search";
  drugebility_blast_search.operations = {"drugebility_blast_search"};
  drugebility_blast_search.type = "tool";

  drugebility_blast_search.inTypes = {};
  drugebility_blast_search.inTypes.push_back("http://edamontology.org/data_1566");
  sort (drugebility_blast_search.inTypes.begin(),drugebility_blast_search.inTypes.end());
  drugebility_blast_search.output = "http://edamontology.org/data_2976";
  biotools.push_back(drugebility_blast_search);

  Tool dssp;
  dssp.id = "dssp";
  dssp.operations = {"dssp"};
  dssp.type = "tool";

  dssp.inTypes = {};
  dssp.inTypes.push_back("http://edamontology.org/data_1277");
  sort (dssp.inTypes.begin(),dssp.inTypes.end());
  dssp.output = "http://edamontology.org/data_1127";
  biotools.push_back(dssp);

  Tool echobase;
  echobase.id = "echobase";
  echobase.operations = {"echobase"};
  echobase.type = "tool";

  echobase.inTypes = {};
  echobase.inTypes.push_back("http://edamontology.org/data_0916");
  sort (echobase.inTypes.begin(),echobase.inTypes.end());
  echobase.output = "http://edamontology.org/data_1026";
  biotools.push_back(echobase);

  Tool ecid;
  ecid.id = "ecid";
  ecid.operations = {"ecid"};
  ecid.type = "tool";

  ecid.inTypes = {};
  ecid.inTypes.push_back("http://edamontology.org/data_2093");
  sort (ecid.inTypes.begin(),ecid.inTypes.end());
  ecid.output = "http://edamontology.org/data_0989";
  biotools.push_back(ecid);

  Tool ecogene;
  ecogene.id = "ecogene";
  ecogene.operations = {"ecogene"};
  ecogene.type = "tool";

  ecogene.inTypes = {};
  ecogene.inTypes.push_back("http://edamontology.org/data_0916");
  sort (ecogene.inTypes.begin(),ecogene.inTypes.end());
  ecogene.output = "http://edamontology.org/data_1795";
  biotools.push_back(ecogene);

  Tool edgar;
  edgar.id = "edgar";
  edgar.operations = {"edgar"};
  edgar.type = "tool";

  edgar.inTypes = {};
  edgar.inTypes.push_back("http://edamontology.org/data_1622");
  sort (edgar.inTypes.begin(),edgar.inTypes.end());
  edgar.output = "http://edamontology.org/data_3668";
  biotools.push_back(edgar);

  Tool eds;
  eds.id = "eds";
  eds.operations = {"eds"};
  eds.type = "tool";

  eds.inTypes = {};
  eds.inTypes.push_back("http://edamontology.org/data_0896");
  sort (eds.inTypes.begin(),eds.inTypes.end());
  eds.output = "http://edamontology.org/data_1127";
  biotools.push_back(eds);

  Tool effectiveccbd;
  effectiveccbd.id = "effectiveccbd";
  effectiveccbd.operations = {"effectiveccbd"};
  effectiveccbd.type = "tool";

  effectiveccbd.inTypes = {};
  effectiveccbd.inTypes.push_back("http://edamontology.org/data_0896");
  sort (effectiveccbd.inTypes.begin(),effectiveccbd.inTypes.end());
  effectiveccbd.output = "http://edamontology.org/data_2976";
  biotools.push_back(effectiveccbd);

  Tool ega;
  ega.id = "ega";
  ega.operations = {"ega"};
  ega.type = "tool";

  ega.inTypes = {};
  ega.inTypes.push_back("http://edamontology.org/data_2531");
  sort (ega.inTypes.begin(),ega.inTypes.end());
  ega.output = "http://edamontology.org/data_2383";
  biotools.push_back(ega);

  Tool eggnog;
  eggnog.id = "eggnog";
  eggnog.operations = {"eggnog"};
  eggnog.type = "tool";

  eggnog.inTypes = {};
  eggnog.inTypes.push_back("http://edamontology.org/data_1233");
  eggnog.inTypes.push_back("http://edamontology.org/data_1384");
  eggnog.inTypes.push_back("http://edamontology.org/data_0872");
  eggnog.inTypes.push_back("http://edamontology.org/data_1364");
  sort (eggnog.inTypes.begin(),eggnog.inTypes.end());
  eggnog.output = "http://edamontology.org/data_2976";
  biotools.push_back(eggnog);

  Tool egmrg;
  egmrg.id = "egmrg";
  egmrg.operations = {"egmrg"};
  egmrg.type = "tool";

  egmrg.inTypes = {};
  egmrg.inTypes.push_back("http://edamontology.org/data_2603");
  sort (egmrg.inTypes.begin(),egmrg.inTypes.end());
  egmrg.output = "http://edamontology.org/data_2299";
  biotools.push_back(egmrg);

  Tool emap;
  emap.id = "emap";
  emap.operations = {"emap"};
  emap.type = "tool";

  emap.inTypes = {};
  emap.inTypes.push_back("http://edamontology.org/data_1713");
  sort (emap.inTypes.begin(),emap.inTypes.end());
  emap.output = "http://edamontology.org/data_1149";
  biotools.push_back(emap);

  Tool ena_sequence_search;
  ena_sequence_search.id = "ena_sequence_search";
  ena_sequence_search.operations = {"ena_sequence_search"};
  ena_sequence_search.type = "tool";

  ena_sequence_search.inTypes = {};
  ena_sequence_search.inTypes.push_back("http://edamontology.org/data_0857");
  sort (ena_sequence_search.inTypes.begin(),ena_sequence_search.inTypes.end());
  ena_sequence_search.output = "http://edamontology.org/data_2044";
  biotools.push_back(ena_sequence_search);

  Tool ensembl_genomes_bacteria_blast;
  ensembl_genomes_bacteria_blast.id = "ensembl_genomes_bacteria_blast";
  ensembl_genomes_bacteria_blast.operations = {"ensembl_genomes_bacteria_blast"};
  ensembl_genomes_bacteria_blast.type = "tool";

  ensembl_genomes_bacteria_blast.inTypes = {};
  ensembl_genomes_bacteria_blast.inTypes.push_back("http://edamontology.org/data_0863");
  ensembl_genomes_bacteria_blast.inTypes.push_back("http://edamontology.org/data_0857");
  sort (ensembl_genomes_bacteria_blast.inTypes.begin(),ensembl_genomes_bacteria_blast.inTypes.end());
  ensembl_genomes_bacteria_blast.output = "http://edamontology.org/data_2044";
  biotools.push_back(ensembl_genomes_bacteria_blast);

  Tool ensembl_genomes_bacteria_sequence_search;
  ensembl_genomes_bacteria_sequence_search.id = "ensembl_genomes_bacteria_sequence_search";
  ensembl_genomes_bacteria_sequence_search.operations = {"ensembl_genomes_bacteria_sequence_search"};
  ensembl_genomes_bacteria_sequence_search.type = "tool";

  ensembl_genomes_bacteria_sequence_search.inTypes = {};
  ensembl_genomes_bacteria_sequence_search.inTypes.push_back("http://edamontology.org/data_0863");
  ensembl_genomes_bacteria_sequence_search.inTypes.push_back("http://edamontology.org/data_0857");
  sort (ensembl_genomes_bacteria_sequence_search.inTypes.begin(),ensembl_genomes_bacteria_sequence_search.inTypes.end());
  ensembl_genomes_bacteria_sequence_search.output = "http://edamontology.org/data_2044";
  biotools.push_back(ensembl_genomes_bacteria_sequence_search);

  Tool ensembl_genomes_fungi_blast;
  ensembl_genomes_fungi_blast.id = "ensembl_genomes_fungi_blast";
  ensembl_genomes_fungi_blast.operations = {"ensembl_genomes_fungi_blast"};
  ensembl_genomes_fungi_blast.type = "tool";

  ensembl_genomes_fungi_blast.inTypes = {};
  ensembl_genomes_fungi_blast.inTypes.push_back("http://edamontology.org/data_0863");
  ensembl_genomes_fungi_blast.inTypes.push_back("http://edamontology.org/data_0857");
  sort (ensembl_genomes_fungi_blast.inTypes.begin(),ensembl_genomes_fungi_blast.inTypes.end());
  ensembl_genomes_fungi_blast.output = "http://edamontology.org/data_2044";
  biotools.push_back(ensembl_genomes_fungi_blast);

  Tool ensembl_genomes_fungi_sequence_search;
  ensembl_genomes_fungi_sequence_search.id = "ensembl_genomes_fungi_sequence_search";
  ensembl_genomes_fungi_sequence_search.operations = {"ensembl_genomes_fungi_sequence_search"};
  ensembl_genomes_fungi_sequence_search.type = "tool";

  ensembl_genomes_fungi_sequence_search.inTypes = {};
  ensembl_genomes_fungi_sequence_search.inTypes.push_back("http://edamontology.org/data_0863");
  ensembl_genomes_fungi_sequence_search.inTypes.push_back("http://edamontology.org/data_0857");
  sort (ensembl_genomes_fungi_sequence_search.inTypes.begin(),ensembl_genomes_fungi_sequence_search.inTypes.end());
  ensembl_genomes_fungi_sequence_search.output = "http://edamontology.org/data_2044";
  biotools.push_back(ensembl_genomes_fungi_sequence_search);

  Tool ensembl_genomes_metazoa_blast;
  ensembl_genomes_metazoa_blast.id = "ensembl_genomes_metazoa_blast";
  ensembl_genomes_metazoa_blast.operations = {"ensembl_genomes_metazoa_blast"};
  ensembl_genomes_metazoa_blast.type = "tool";

  ensembl_genomes_metazoa_blast.inTypes = {};
  ensembl_genomes_metazoa_blast.inTypes.push_back("http://edamontology.org/data_0863");
  ensembl_genomes_metazoa_blast.inTypes.push_back("http://edamontology.org/data_0857");
  sort (ensembl_genomes_metazoa_blast.inTypes.begin(),ensembl_genomes_metazoa_blast.inTypes.end());
  ensembl_genomes_metazoa_blast.output = "http://edamontology.org/data_2044";
  biotools.push_back(ensembl_genomes_metazoa_blast);

  Tool ensembl_genomes_metazoa_sequence_search;
  ensembl_genomes_metazoa_sequence_search.id = "ensembl_genomes_metazoa_sequence_search";
  ensembl_genomes_metazoa_sequence_search.operations = {"ensembl_genomes_metazoa_sequence_search"};
  ensembl_genomes_metazoa_sequence_search.type = "tool";

  ensembl_genomes_metazoa_sequence_search.inTypes = {};
  ensembl_genomes_metazoa_sequence_search.inTypes.push_back("http://edamontology.org/data_0863");
  sort (ensembl_genomes_metazoa_sequence_search.inTypes.begin(),ensembl_genomes_metazoa_sequence_search.inTypes.end());
  ensembl_genomes_metazoa_sequence_search.output = "http://edamontology.org/data_2044";
  biotools.push_back(ensembl_genomes_metazoa_sequence_search);

  Tool ensembl_genomes_plants_blast;
  ensembl_genomes_plants_blast.id = "ensembl_genomes_plants_blast";
  ensembl_genomes_plants_blast.operations = {"ensembl_genomes_plants_blast"};
  ensembl_genomes_plants_blast.type = "tool";

  ensembl_genomes_plants_blast.inTypes = {};
  ensembl_genomes_plants_blast.inTypes.push_back("http://edamontology.org/data_0863");
  ensembl_genomes_plants_blast.inTypes.push_back("http://edamontology.org/data_0857");
  sort (ensembl_genomes_plants_blast.inTypes.begin(),ensembl_genomes_plants_blast.inTypes.end());
  ensembl_genomes_plants_blast.output = "http://edamontology.org/data_2044";
  biotools.push_back(ensembl_genomes_plants_blast);

  Tool ensembl_genomes_plants_sequence_search;
  ensembl_genomes_plants_sequence_search.id = "ensembl_genomes_plants_sequence_search";
  ensembl_genomes_plants_sequence_search.operations = {"ensembl_genomes_plants_sequence_search"};
  ensembl_genomes_plants_sequence_search.type = "tool";

  ensembl_genomes_plants_sequence_search.inTypes = {};
  ensembl_genomes_plants_sequence_search.inTypes.push_back("http://edamontology.org/data_0863");
  ensembl_genomes_plants_sequence_search.inTypes.push_back("http://edamontology.org/data_0857");
  sort (ensembl_genomes_plants_sequence_search.inTypes.begin(),ensembl_genomes_plants_sequence_search.inTypes.end());
  ensembl_genomes_plants_sequence_search.output = "http://edamontology.org/data_2044";
  biotools.push_back(ensembl_genomes_plants_sequence_search);

  Tool ensembl_genomes_protists_blast;
  ensembl_genomes_protists_blast.id = "ensembl_genomes_protists_blast";
  ensembl_genomes_protists_blast.operations = {"ensembl_genomes_protists_blast"};
  ensembl_genomes_protists_blast.type = "tool";

  ensembl_genomes_protists_blast.inTypes = {};
  ensembl_genomes_protists_blast.inTypes.push_back("http://edamontology.org/data_0863");
  sort (ensembl_genomes_protists_blast.inTypes.begin(),ensembl_genomes_protists_blast.inTypes.end());
  ensembl_genomes_protists_blast.output = "http://edamontology.org/data_2044";
  biotools.push_back(ensembl_genomes_protists_blast);

  Tool ensembl_genomes_protists_sequence_search;
  ensembl_genomes_protists_sequence_search.id = "ensembl_genomes_protists_sequence_search";
  ensembl_genomes_protists_sequence_search.operations = {"ensembl_genomes_protists_sequence_search"};
  ensembl_genomes_protists_sequence_search.type = "tool";

  ensembl_genomes_protists_sequence_search.inTypes = {};
  ensembl_genomes_protists_sequence_search.inTypes.push_back("http://edamontology.org/data_0863");
  sort (ensembl_genomes_protists_sequence_search.inTypes.begin(),ensembl_genomes_protists_sequence_search.inTypes.end());
  ensembl_genomes_protists_sequence_search.output = "http://edamontology.org/data_2044";
  biotools.push_back(ensembl_genomes_protists_sequence_search);

  Tool ensembl_sequence_search_blast;
  ensembl_sequence_search_blast.id = "ensembl_sequence_search_blast";
  ensembl_sequence_search_blast.operations = {"ensembl_sequence_search_blast"};
  ensembl_sequence_search_blast.type = "tool";

  ensembl_sequence_search_blast.inTypes = {};
  ensembl_sequence_search_blast.inTypes.push_back("http://edamontology.org/data_0857");
  sort (ensembl_sequence_search_blast.inTypes.begin(),ensembl_sequence_search_blast.inTypes.end());
  ensembl_sequence_search_blast.output = "http://edamontology.org/data_2044";
  biotools.push_back(ensembl_sequence_search_blast);

  Tool entrez_protein_clusters;
  entrez_protein_clusters.id = "entrez_protein_clusters";
  entrez_protein_clusters.operations = {"entrez_protein_clusters"};
  entrez_protein_clusters.type = "tool";

  entrez_protein_clusters.inTypes = {};
  entrez_protein_clusters.inTypes.push_back("http://edamontology.org/data_0907");
  sort (entrez_protein_clusters.inTypes.begin(),entrez_protein_clusters.inTypes.end());
  entrez_protein_clusters.output = "http://edamontology.org/data_1075";
  biotools.push_back(entrez_protein_clusters);

  Tool enzymeminer;
  enzymeminer.id = "enzymeminer";
  enzymeminer.operations = {"enzymeminer"};
  enzymeminer.type = "tool";

  enzymeminer.inTypes = {};
  enzymeminer.inTypes.push_back("http://edamontology.org/data_1277");
  enzymeminer.inTypes.push_back("http://edamontology.org/data_1233");
  enzymeminer.inTypes.push_back("http://edamontology.org/data_1245");
  sort (enzymeminer.inTypes.begin(),enzymeminer.inTypes.end());
  enzymeminer.output = "http://edamontology.org/data_2976";
  biotools.push_back(enzymeminer);

  Tool eosc_pipeline_reproducibility;
  eosc_pipeline_reproducibility.id = "eosc_pipeline_reproducibility";
  eosc_pipeline_reproducibility.operations = {"eosc_pipeline_reproducibility"};
  eosc_pipeline_reproducibility.type = "tool";

  eosc_pipeline_reproducibility.inTypes = {};
  eosc_pipeline_reproducibility.inTypes.push_back("http://edamontology.org/data_2044");
  sort (eosc_pipeline_reproducibility.inTypes.begin(),eosc_pipeline_reproducibility.inTypes.end());
  eosc_pipeline_reproducibility.output = "http://edamontology.org/data_2044";
  biotools.push_back(eosc_pipeline_reproducibility);

  Tool est2genome;
  est2genome.id = "est2genome";
  est2genome.operations = {"est2genome"};
  est2genome.type = "tool";

  est2genome.inTypes = {};
  est2genome.inTypes.push_back("http://edamontology.org/data_1276");
  sort (est2genome.inTypes.begin(),est2genome.inTypes.end());
  est2genome.output = "http://edamontology.org/data_2887";
  est2genome.output = "http://edamontology.org/data_2887";
  biotools.push_back(est2genome);

  Tool ests_source;
  ests_source.id = "ests_source";
  ests_source.operations = {"ests_source"};
  ests_source.type = "tool";

  ests_source.inTypes = {};
  ests_source.inTypes.push_back("http://edamontology.org/data_3134");
  sort (ests_source.inTypes.begin(),ests_source.inTypes.end());
  ests_source.output = "http://edamontology.org/data_2704";
  biotools.push_back(ests_source);

  Tool euhcvdb;
  euhcvdb.id = "euhcvdb";
  euhcvdb.operations = {"euhcvdb"};
  euhcvdb.type = "tool";

  euhcvdb.inTypes = {};
  euhcvdb.inTypes.push_back("http://edamontology.org/data_0849");
  sort (euhcvdb.inTypes.begin(),euhcvdb.inTypes.end());
  euhcvdb.output = "http://edamontology.org/data_1097";
  biotools.push_back(euhcvdb);

  Tool extractalign;
  extractalign.id = "extractalign";
  extractalign.operations = {"extractalign"};
  extractalign.type = "tool";

  extractalign.inTypes = {};
  extractalign.inTypes.push_back("http://edamontology.org/data_0849");
  sort (extractalign.inTypes.begin(),extractalign.inTypes.end());
  extractalign.output = "http://edamontology.org/data_0863";
  biotools.push_back(extractalign);

  Tool fasta;
  fasta.id = "fasta";
  fasta.operations = {"fasta"};
  fasta.type = "tool";

  fasta.inTypes = {};
  fasta.inTypes.push_back("http://edamontology.org/data_0857");
  sort (fasta.inTypes.begin(),fasta.inTypes.end());
  fasta.output = "http://edamontology.org/data_2044";
  biotools.push_back(fasta);

  Tool fastm_ebi;
  fastm_ebi.id = "fastm_ebi";
  fastm_ebi.operations = {"fastm_ebi"};
  fastm_ebi.type = "tool";

  fastm_ebi.inTypes = {};
  fastm_ebi.inTypes.push_back("http://edamontology.org/data_0857");
  sort (fastm_ebi.inTypes.begin(),fastm_ebi.inTypes.end());
  fastm_ebi.output = "http://edamontology.org/data_2976";
  biotools.push_back(fastm_ebi);

  Tool fireprot_asr;
  fireprot_asr.id = "fireprot_asr";
  fireprot_asr.operations = {"fireprot_asr"};
  fireprot_asr.type = "tool";

  fireprot_asr.inTypes = {};
  fireprot_asr.inTypes.push_back("http://edamontology.org/data_1384");
  fireprot_asr.inTypes.push_back("http://edamontology.org/data_2976");
  fireprot_asr.inTypes.push_back("http://edamontology.org/data_0872");
  sort (fireprot_asr.inTypes.begin(),fireprot_asr.inTypes.end());
  fireprot_asr.output = "http://edamontology.org/data_2976";
  biotools.push_back(fireprot_asr);

  Tool flymine;
  flymine.id = "flymine";
  flymine.operations = {"flymine"};
  flymine.type = "tool";

  flymine.inTypes = {};
  flymine.inTypes.push_back("http://edamontology.org/data_3753");
  flymine.inTypes.push_back("http://edamontology.org/data_3786");
  flymine.inTypes.push_back("http://edamontology.org/data_1255");
  sort (flymine.inTypes.begin(),flymine.inTypes.end());
  flymine.output = "http://edamontology.org/data_1255";
  flymine.output = "http://edamontology.org/data_2353";
  biotools.push_back(flymine);

  Tool fqextract;
  fqextract.id = "fqextract";
  fqextract.operations = {"fqextract"};
  fqextract.type = "tool";

  fqextract.inTypes = {};
  fqextract.inTypes.push_back("http://edamontology.org/data_0006");
  fqextract.inTypes.push_back("http://edamontology.org/data_0006");
  fqextract.inTypes.push_back("http://edamontology.org/data_0006");
  sort (fqextract.inTypes.begin(),fqextract.inTypes.end());
  fqextract.output = "http://edamontology.org/data_0006";
  fqextract.output = "http://edamontology.org/data_0006";
  fqextract.output = "http://edamontology.org/data_0006";
  fqextract.output = "http://edamontology.org/data_0006";
  biotools.push_back(fqextract);

  Tool fungenes;
  fungenes.id = "fungenes";
  fungenes.operations = {"fungenes"};
  fungenes.type = "tool";

  fungenes.inTypes = {};
  fungenes.inTypes.push_back("http://edamontology.org/data_0928");
  fungenes.inTypes.push_back("http://edamontology.org/data_2600");
  sort (fungenes.inTypes.begin(),fungenes.inTypes.end());
  fungenes.output = "http://edamontology.org/data_0842";
  biotools.push_back(fungenes);

  Tool g_blastn;
  g_blastn.id = "g_blastn";
  g_blastn.operations = {"g_blastn"};
  g_blastn.type = "tool";

  g_blastn.inTypes = {};
  g_blastn.inTypes.push_back("http://edamontology.org/data_0857");
  sort (g_blastn.inTypes.begin(),g_blastn.inTypes.end());
  g_blastn.output = "http://edamontology.org/data_2976";
  biotools.push_back(g_blastn);

  Tool gconvert;
  gconvert.id = "gconvert";
  gconvert.operations = {"gconvert"};
  gconvert.type = "tool";

  gconvert.inTypes = {};
  gconvert.inTypes.push_back("http://edamontology.org/data_0842");
  sort (gconvert.inTypes.begin(),gconvert.inTypes.end());
  gconvert.output = "http://edamontology.org/data_0842";
  biotools.push_back(gconvert);

  Tool gem3;
  gem3.id = "gem3";
  gem3.operations = {"gem3"};
  gem3.type = "tool";

  gem3.inTypes = {};
  gem3.inTypes.push_back("http://edamontology.org/data_3671");
  sort (gem3.inTypes.begin(),gem3.inTypes.end());
  gem3.output = "http://edamontology.org/data_1193";
  biotools.push_back(gem3);

  Tool genatlas;
  genatlas.id = "genatlas";
  genatlas.operations = {"genatlas"};
  genatlas.type = "tool";

  genatlas.inTypes = {};
  genatlas.inTypes.push_back("http://edamontology.org/data_0916");
  sort (genatlas.inTypes.begin(),genatlas.inTypes.end());
  genatlas.output = "http://edamontology.org/data_1026";
  biotools.push_back(genatlas);

  Tool genbank;
  genbank.id = "genbank";
  genbank.operations = {"genbank"};
  genbank.type = "tool";

  genbank.inTypes = {};
  genbank.inTypes.push_back("http://edamontology.org/data_0849");
  sort (genbank.inTypes.begin(),genbank.inTypes.end());
  genbank.output = "http://edamontology.org/data_1097";
  biotools.push_back(genbank);

  Tool gene3d_structural;
  gene3d_structural.id = "gene3d_structural";
  gene3d_structural.operations = {"gene3d_structural"};
  gene3d_structural.type = "tool";

  gene3d_structural.inTypes = {};
  gene3d_structural.inTypes.push_back("http://edamontology.org/data_0907");
  sort (gene3d_structural.inTypes.begin(),gene3d_structural.inTypes.end());
  gene3d_structural.output = "http://edamontology.org/data_2701";
  biotools.push_back(gene3d_structural);

  Tool genedb;
  genedb.id = "genedb";
  genedb.operations = {"genedb"};
  genedb.type = "tool";

  genedb.inTypes = {};
  genedb.inTypes.push_back("http://edamontology.org/data_0916");
  sort (genedb.inTypes.begin(),genedb.inTypes.end());
  genedb.output = "http://edamontology.org/data_1026";
  biotools.push_back(genedb);

  Tool genefarm;
  genefarm.id = "genefarm";
  genefarm.operations = {"genefarm"};
  genefarm.type = "tool";

  genefarm.inTypes = {};
  genefarm.inTypes.push_back("http://edamontology.org/data_0916");
  sort (genefarm.inTypes.begin(),genefarm.inTypes.end());
  genefarm.output = "http://edamontology.org/data_2295";
  biotools.push_back(genefarm);

  Tool genepublisher;
  genepublisher.id = "genepublisher";
  genepublisher.operations = {"genepublisher"};
  genepublisher.type = "tool";

  genepublisher.inTypes = {};
  genepublisher.inTypes.push_back("http://edamontology.org/data_0916");
  sort (genepublisher.inTypes.begin(),genepublisher.inTypes.end());
  genepublisher.output = "http://edamontology.org/data_3110";
  biotools.push_back(genepublisher);

  Tool genesnps;
  genesnps.id = "genesnps";
  genesnps.operations = {"genesnps"};
  genesnps.type = "tool";

  genesnps.inTypes = {};
  genesnps.inTypes.push_back("http://edamontology.org/data_3498");
  sort (genesnps.inTypes.begin(),genesnps.inTypes.end());
  genesnps.output = "http://edamontology.org/data_2805";
  biotools.push_back(genesnps);

  Tool genevestigator;
  genevestigator.id = "genevestigator";
  genevestigator.operations = {"genevestigator"};
  genevestigator.type = "tool";

  genevestigator.inTypes = {};
  genevestigator.inTypes.push_back("http://edamontology.org/data_0916");
  sort (genevestigator.inTypes.begin(),genevestigator.inTypes.end());
  genevestigator.output = "http://edamontology.org/data_3021";
  biotools.push_back(genevestigator);

  Tool genolist;
  genolist.id = "genolist";
  genolist.operations = {"genolist"};
  genolist.type = "tool";

  genolist.inTypes = {};
  genolist.inTypes.push_back("http://edamontology.org/data_0916");
  sort (genolist.inTypes.begin(),genolist.inTypes.end());
  genolist.output = "http://edamontology.org/data_2739";
  biotools.push_back(genolist);

  Tool genomereviews;
  genomereviews.id = "genomereviews";
  genomereviews.operations = {"genomereviews"};
  genomereviews.type = "tool";

  genomereviews.inTypes = {};
  genomereviews.inTypes.push_back("http://edamontology.org/data_2711");
  sort (genomereviews.inTypes.begin(),genomereviews.inTypes.end());
  genomereviews.output = "http://edamontology.org/data_2751";
  biotools.push_back(genomereviews);

  Tool genonets;
  genonets.id = "genonets";
  genonets.operations = {"genonets"};
  genonets.type = "tool";

  genonets.inTypes = {};
  genonets.inTypes.push_back("http://edamontology.org/data_2600");
  sort (genonets.inTypes.begin(),genonets.inTypes.end());
  genonets.output = "http://edamontology.org/data_0920";
  biotools.push_back(genonets);

  Tool germ_line_v_genes;
  germ_line_v_genes.id = "germ_line_v_genes";
  germ_line_v_genes.operations = {"germ_line_v_genes"};
  germ_line_v_genes.type = "tool";

  germ_line_v_genes.inTypes = {};
  germ_line_v_genes.inTypes.push_back("http://edamontology.org/data_0916");
  sort (germ_line_v_genes.inTypes.begin(),germ_line_v_genes.inTypes.end());
  germ_line_v_genes.output = "http://edamontology.org/data_2835";
  biotools.push_back(germ_line_v_genes);

  Tool germonline;
  germonline.id = "germonline";
  germonline.operations = {"germonline"};
  germonline.type = "tool";

  germonline.inTypes = {};
  germonline.inTypes.push_back("http://edamontology.org/data_0916");
  sort (germonline.inTypes.begin(),germonline.inTypes.end());
  germonline.output = "http://edamontology.org/data_1045";
  germonline.output = "http://edamontology.org/data_1026";
  biotools.push_back(germonline);

  Tool getsequence;
  getsequence.id = "getsequence";
  getsequence.operations = {"getsequence"};
  getsequence.type = "tool";

  getsequence.inTypes = {};
  getsequence.inTypes.push_back("http://edamontology.org/data_0863");
  sort (getsequence.inTypes.begin(),getsequence.inTypes.end());
  getsequence.output = "http://edamontology.org/data_0863";
  biotools.push_back(getsequence);

  Tool giardiadb;
  giardiadb.id = "giardiadb";
  giardiadb.operations = {"giardiadb"};
  giardiadb.type = "tool";

  giardiadb.inTypes = {};
  giardiadb.inTypes.push_back("http://edamontology.org/data_0916");
  sort (giardiadb.inTypes.begin(),giardiadb.inTypes.end());
  giardiadb.output = "http://edamontology.org/data_2295";
  biotools.push_back(giardiadb);

  Tool glycosciences;
  glycosciences.id = "glycosciences";
  glycosciences.operations = {"glycosciences"};
  glycosciences.type = "tool";

  glycosciences.inTypes = {};
  glycosciences.inTypes.push_back("http://edamontology.org/data_2313");
  sort (glycosciences.inTypes.begin(),glycosciences.inTypes.end());
  glycosciences.output = "http://edamontology.org/data_2796";
  biotools.push_back(glycosciences);

  Tool gmap;
  gmap.id = "gmap";
  gmap.operations = {"gmap"};
  gmap.type = "tool";

  gmap.inTypes = {};
  gmap.inTypes.push_back("http://edamontology.org/data_0006");
  sort (gmap.inTypes.begin(),gmap.inTypes.end());
  gmap.output = "http://edamontology.org/data_0006";
  gmap.output = "http://edamontology.org/data_0006";
  gmap.output = "http://edamontology.org/data_0006";
  gmap.output = "http://edamontology.org/data_0863";
  biotools.push_back(gmap);

  Tool gorth;
  gorth.id = "gorth";
  gorth.operations = {"gorth"};
  gorth.type = "tool";

  gorth.inTypes = {};
  gorth.inTypes.push_back("http://edamontology.org/data_0842");
  sort (gorth.inTypes.begin(),gorth.inTypes.end());
  gorth.output = "http://edamontology.org/data_0842";
  biotools.push_back(gorth);

  Tool gpcr_sarfari_blast_search;
  gpcr_sarfari_blast_search.id = "gpcr_sarfari_blast_search";
  gpcr_sarfari_blast_search.operations = {"gpcr_sarfari_blast_search"};
  gpcr_sarfari_blast_search.type = "tool";

  gpcr_sarfari_blast_search.inTypes = {};
  gpcr_sarfari_blast_search.inTypes.push_back("http://edamontology.org/data_0857");
  sort (gpcr_sarfari_blast_search.inTypes.begin(),gpcr_sarfari_blast_search.inTypes.end());
  gpcr_sarfari_blast_search.output = "http://edamontology.org/data_2976";
  biotools.push_back(gpcr_sarfari_blast_search);

  Tool gpcrdb;
  gpcrdb.id = "gpcrdb";
  gpcrdb.operations = {"gpcrdb"};
  gpcrdb.type = "tool";

  gpcrdb.inTypes = {};
  gpcrdb.inTypes.push_back("http://edamontology.org/data_1381");
  gpcrdb.inTypes.push_back("http://edamontology.org/data_0857");
  gpcrdb.inTypes.push_back("http://edamontology.org/data_1707");
  gpcrdb.inTypes.push_back("http://edamontology.org/data_0872");
  gpcrdb.inTypes.push_back("http://edamontology.org/data_2884");
  gpcrdb.inTypes.push_back("http://edamontology.org/data_2886");
  gpcrdb.inTypes.push_back("http://edamontology.org/data_1277");
  gpcrdb.inTypes.push_back("http://edamontology.org/data_1460");
  sort (gpcrdb.inTypes.begin(),gpcrdb.inTypes.end());
  gpcrdb.output = "http://edamontology.org/data_1460";
  gpcrdb.output = "http://edamontology.org/data_2974";
  biotools.push_back(gpcrdb);

  Tool gpcrs;
  gpcrs.id = "gpcrs";
  gpcrs.operations = {"gpcrs"};
  gpcrs.type = "tool";

  gpcrs.inTypes = {};
  gpcrs.inTypes.push_back("http://edamontology.org/data_1277");
  sort (gpcrs.inTypes.begin(),gpcrs.inTypes.end());
  gpcrs.output = "http://edamontology.org/data_1131";
  biotools.push_back(gpcrs);

  Tool grenits;
  grenits.id = "grenits";
  grenits.operations = {"grenits"};
  grenits.type = "tool";

  grenits.inTypes = {};
  grenits.inTypes.push_back("http://edamontology.org/data_2884");
  grenits.inTypes.push_back("http://edamontology.org/data_1772");
  grenits.inTypes.push_back("http://edamontology.org/data_2048");
  sort (grenits.inTypes.begin(),grenits.inTypes.end());
  grenits.output = "http://edamontology.org/data_0928";
  biotools.push_back(grenits);

  Tool gwfasta;
  gwfasta.id = "gwfasta";
  gwfasta.operations = {"gwfasta"};
  gwfasta.type = "tool";

  gwfasta.inTypes = {};
  gwfasta.inTypes.push_back("http://edamontology.org/data_0857");
  sort (gwfasta.inTypes.begin(),gwfasta.inTypes.end());
  gwfasta.output = "http://edamontology.org/data_2044";
  biotools.push_back(gwfasta);

  Tool h_blast;
  h_blast.id = "h_blast";
  h_blast.operations = {"h_blast"};
  h_blast.type = "tool";

  h_blast.inTypes = {};
  h_blast.inTypes.push_back("http://edamontology.org/data_0857");
  sort (h_blast.inTypes.begin(),h_blast.inTypes.end());
  h_blast.output = "http://edamontology.org/data_2044";
  biotools.push_back(h_blast);

  Tool h_invdb;
  h_invdb.id = "h_invdb";
  h_invdb.operations = {"h_invdb"};
  h_invdb.type = "tool";

  h_invdb.inTypes = {};
  h_invdb.inTypes.push_back("http://edamontology.org/data_3134");
  sort (h_invdb.inTypes.begin(),h_invdb.inTypes.end());
  h_invdb.output = "http://edamontology.org/data_2770";
  biotools.push_back(h_invdb);

  Tool hexpochem;
  hexpochem.id = "hexpochem";
  hexpochem.operations = {"hexpochem"};
  hexpochem.type = "tool";

  hexpochem.inTypes = {};
  hexpochem.inTypes.push_back("http://edamontology.org/data_0906");
  hexpochem.inTypes.push_back("http://edamontology.org/data_1566");
  sort (hexpochem.inTypes.begin(),hexpochem.inTypes.end());
  hexpochem.output = "http://edamontology.org/data_0990";
  biotools.push_back(hexpochem);

  Tool hgnc;
  hgnc.id = "hgnc";
  hgnc.operations = {"hgnc"};
  hgnc.type = "tool";

  hgnc.inTypes = {};
  hgnc.inTypes.push_back("http://edamontology.org/data_0916");
  sort (hgnc.inTypes.begin(),hgnc.inTypes.end());
  hgnc.output = "http://edamontology.org/data_2298";
  biotools.push_back(hgnc);

  Tool hgv_lps;
  hgv_lps.id = "hgv_lps";
  hgv_lps.operations = {"hgv_lps"};
  hgv_lps.type = "tool";

  hgv_lps.inTypes = {};
  hgv_lps.inTypes.push_back("http://edamontology.org/data_0006");
  hgv_lps.inTypes.push_back("http://edamontology.org/data_0006");
  sort (hgv_lps.inTypes.begin(),hgv_lps.inTypes.end());
  hgv_lps.output = "http://edamontology.org/data_0006";
  biotools.push_back(hgv_lps);

  Tool hogenom;
  hogenom.id = "hogenom";
  hogenom.operations = {"hogenom"};
  hogenom.type = "tool";

  hogenom.inTypes = {};
  hogenom.inTypes.push_back("http://edamontology.org/data_0872");
  sort (hogenom.inTypes.begin(),hogenom.inTypes.end());
  hogenom.output = "http://edamontology.org/data_3021";
  biotools.push_back(hogenom);

  Tool hovergen;
  hovergen.id = "hovergen";
  hovergen.operations = {"hovergen"};
  hovergen.type = "tool";

  hovergen.inTypes = {};
  hovergen.inTypes.push_back("http://edamontology.org/data_0872");
  sort (hovergen.inTypes.begin(),hovergen.inTypes.end());
  hovergen.output = "http://edamontology.org/data_3021";
  biotools.push_back(hovergen);

  Tool hs_blastn;
  hs_blastn.id = "hs_blastn";
  hs_blastn.operations = {"hs_blastn"};
  hs_blastn.type = "tool";

  hs_blastn.inTypes = {};
  hs_blastn.inTypes.push_back("http://edamontology.org/data_0857");
  sort (hs_blastn.inTypes.begin(),hs_blastn.inTypes.end());
  hs_blastn.output = "http://edamontology.org/data_2044";
  biotools.push_back(hs_blastn);

  Tool hssp;
  hssp.id = "hssp";
  hssp.operations = {"hssp"};
  hssp.type = "tool";

  hssp.inTypes = {};
  hssp.inTypes.push_back("http://edamontology.org/data_1277");
  sort (hssp.inTypes.begin(),hssp.inTypes.end());
  hssp.output = "http://edamontology.org/data_1127";
  biotools.push_back(hssp);

  Tool huge;
  huge.id = "huge";
  huge.operations = {"huge"};
  huge.type = "tool";

  huge.inTypes = {};
  huge.inTypes.push_back("http://edamontology.org/data_0896");
  sort (huge.inTypes.begin(),huge.inTypes.end());
  huge.output = "http://edamontology.org/data_2393";
  biotools.push_back(huge);

  Tool idbases;
  idbases.id = "idbases";
  idbases.operations = {"idbases"};
  idbases.type = "tool";

  idbases.inTypes = {};
  idbases.inTypes.push_back("http://edamontology.org/data_3498");
  sort (idbases.inTypes.begin(),idbases.inTypes.end());
  idbases.output = "http://edamontology.org/data_1025";
  idbases.output = "http://edamontology.org/data_1097";
  biotools.push_back(idbases);

  Tool idrem;
  idrem.id = "idrem";
  idrem.operations = {"idrem"};
  idrem.type = "tool";

  idrem.inTypes = {};
  idrem.inTypes.push_back("http://edamontology.org/data_2600");
  sort (idrem.inTypes.begin(),idrem.inTypes.end());
  idrem.output = "http://edamontology.org/data_0954";
  idrem.output = "http://edamontology.org/data_2603";
  idrem.output = "http://edamontology.org/data_2600";
  biotools.push_back(idrem);

  Tool imgt_3dstructure;
  imgt_3dstructure.id = "imgt_3dstructure";
  imgt_3dstructure.operations = {"imgt_3dstructure"};
  imgt_3dstructure.type = "tool";

  imgt_3dstructure.inTypes = {};
  imgt_3dstructure.inTypes.push_back("http://edamontology.org/data_2085");
  imgt_3dstructure.inTypes.push_back("http://edamontology.org/data_0863");
  sort (imgt_3dstructure.inTypes.begin(),imgt_3dstructure.inTypes.end());
  imgt_3dstructure.output = "http://edamontology.org/data_0842";
  imgt_3dstructure.output = "http://edamontology.org/data_0968";
  imgt_3dstructure.output = "http://edamontology.org/data_2858";
  imgt_3dstructure.output = "http://edamontology.org/data_1127";
  biotools.push_back(imgt_3dstructure);

  Tool imgt_v_quest;
  imgt_v_quest.id = "imgt_v_quest";
  imgt_v_quest.operations = {"imgt_v_quest"};
  imgt_v_quest.type = "tool";

  imgt_v_quest.inTypes = {};
  imgt_v_quest.inTypes.push_back("http://edamontology.org/data_0863");
  imgt_v_quest.inTypes.push_back("http://edamontology.org/data_1255");
  imgt_v_quest.inTypes.push_back("http://edamontology.org/data_2955");
  sort (imgt_v_quest.inTypes.begin(),imgt_v_quest.inTypes.end());
  imgt_v_quest.output = "http://edamontology.org/data_2977";
  biotools.push_back(imgt_v_quest);

  Tool inforesidue;
  inforesidue.id = "inforesidue";
  inforesidue.operations = {"inforesidue"};
  inforesidue.type = "tool";

  inforesidue.inTypes = {};
  inforesidue.inTypes.push_back("http://edamontology.org/data_1276");
  sort (inforesidue.inTypes.begin(),inforesidue.inTypes.end());
  inforesidue.output = "http://edamontology.org/data_1502";
  inforesidue.output = "http://edamontology.org/data_1505";
  biotools.push_back(inforesidue);

  Tool inparanoid;
  inparanoid.id = "inparanoid";
  inparanoid.operations = {"inparanoid"};
  inparanoid.type = "tool";

  inparanoid.inTypes = {};
  inparanoid.inTypes.push_back("http://edamontology.org/data_0842");
  sort (inparanoid.inTypes.begin(),inparanoid.inTypes.end());
  inparanoid.output = "http://edamontology.org/data_0842";
  biotools.push_back(inparanoid);

  Tool intact;
  intact.id = "intact";
  intact.operations = {"intact"};
  intact.type = "tool";

  intact.inTypes = {};
  intact.inTypes.push_back("http://edamontology.org/data_0906");
  sort (intact.inTypes.begin(),intact.inTypes.end());
  intact.output = "http://edamontology.org/data_3021";
  biotools.push_back(intact);

  Tool interactome_insider;
  interactome_insider.id = "interactome_insider";
  interactome_insider.operations = {"interactome_insider"};
  interactome_insider.type = "tool";

  interactome_insider.inTypes = {};
  interactome_insider.inTypes.push_back("http://edamontology.org/data_2600");
  sort (interactome_insider.inTypes.begin(),interactome_insider.inTypes.end());
  interactome_insider.output = "http://edamontology.org/data_1048";
  biotools.push_back(interactome_insider);

  Tool interpro;
  interpro.id = "interpro";
  interpro.operations = {"interpro"};
  interpro.type = "tool";

  interpro.inTypes = {};
  interpro.inTypes.push_back("http://edamontology.org/data_1355");
  sort (interpro.inTypes.begin(),interpro.inTypes.end());
  interpro.output = "http://edamontology.org/data_1133";
  biotools.push_back(interpro);

  Tool ipk_blast;
  ipk_blast.id = "ipk_blast";
  ipk_blast.operations = {"ipk_blast"};
  ipk_blast.type = "tool";

  ipk_blast.inTypes = {};
  ipk_blast.inTypes.push_back("http://edamontology.org/data_0863");
  sort (ipk_blast.inTypes.begin(),ipk_blast.inTypes.end());
  ipk_blast.output = "http://edamontology.org/data_2044";
  biotools.push_back(ipk_blast);

  Tool isoscale;
  isoscale.id = "isoscale";
  isoscale.operations = {"isoscale"};
  isoscale.type = "tool";

  isoscale.inTypes = {};
  isoscale.inTypes.push_back("http://edamontology.org/data_2907");
  sort (isoscale.inTypes.begin(),isoscale.inTypes.end());
  isoscale.output = "http://edamontology.org/data_0857";
  biotools.push_back(isoscale);

  Tool ispred;
  ispred.id = "ispred";
  ispred.operations = {"ispred"};
  ispred.type = "tool";

  ispred.inTypes = {};
  ispred.inTypes.push_back("http://edamontology.org/data_1537");
  ispred.inTypes.push_back("http://edamontology.org/data_1460");
  sort (ispred.inTypes.begin(),ispred.inTypes.end());
  ispred.output = "http://edamontology.org/data_1460";
  ispred.output = "http://edamontology.org/data_1008";
  biotools.push_back(ispred);

  Tool kinase_sarfari_blast_search;
  kinase_sarfari_blast_search.id = "kinase_sarfari_blast_search";
  kinase_sarfari_blast_search.operations = {"kinase_sarfari_blast_search"};
  kinase_sarfari_blast_search.type = "tool";

  kinase_sarfari_blast_search.inTypes = {};
  kinase_sarfari_blast_search.inTypes.push_back("http://edamontology.org/data_0857");
  sort (kinase_sarfari_blast_search.inTypes.begin(),kinase_sarfari_blast_search.inTypes.end());
  kinase_sarfari_blast_search.output = "http://edamontology.org/data_2976";
  biotools.push_back(kinase_sarfari_blast_search);

  Tool klifs;
  klifs.id = "klifs";
  klifs.operations = {"klifs"};
  klifs.type = "tool";

  klifs.inTypes = {};
  klifs.inTypes.push_back("http://edamontology.org/data_2526");
  klifs.inTypes.push_back("http://edamontology.org/data_1712");
  klifs.inTypes.push_back("http://edamontology.org/data_0954");
  klifs.inTypes.push_back("http://edamontology.org/data_2080");
  klifs.inTypes.push_back("http://edamontology.org/data_0982");
  klifs.inTypes.push_back("http://edamontology.org/data_0984");
  klifs.inTypes.push_back("http://edamontology.org/data_2050");
  klifs.inTypes.push_back("http://edamontology.org/data_0906");
  klifs.inTypes.push_back("http://edamontology.org/data_1461");
  klifs.inTypes.push_back("http://edamontology.org/data_0897");
  klifs.inTypes.push_back("http://edamontology.org/data_2992");
  klifs.inTypes.push_back("http://edamontology.org/data_1537");
  klifs.inTypes.push_back("http://edamontology.org/data_0893");
  klifs.inTypes.push_back("http://edamontology.org/data_1463");
  klifs.inTypes.push_back("http://edamontology.org/data_1481");
  klifs.inTypes.push_back("http://edamontology.org/data_0890");
  klifs.inTypes.push_back("http://edamontology.org/data_0889");
  klifs.inTypes.push_back("http://edamontology.org/data_0888");
  klifs.inTypes.push_back("http://edamontology.org/data_1498");
  sort (klifs.inTypes.begin(),klifs.inTypes.end());
  klifs.output = "http://edamontology.org/data_1460";
  klifs.output = "http://edamontology.org/data_2886";
  biotools.push_back(klifs);

  Tool kwip;
  kwip.id = "kwip";
  kwip.operations = {"kwip"};
  kwip.type = "tool";

  kwip.inTypes = {};
  kwip.inTypes.push_back("http://edamontology.org/data_0870");
  sort (kwip.inTypes.begin(),kwip.inTypes.end());
  kwip.output = "http://edamontology.org/data_0848";
  biotools.push_back(kwip);

  Tool lailaps;
  lailaps.id = "lailaps";
  lailaps.operations = {"lailaps"};
  lailaps.type = "tool";

  lailaps.inTypes = {};
  lailaps.inTypes.push_back("http://edamontology.org/data_2080");
  sort (lailaps.inTypes.begin(),lailaps.inTypes.end());
  lailaps.output = "http://edamontology.org/data_0968";
  biotools.push_back(lailaps);

  Tool lebibipqp;
  lebibipqp.id = "lebibipqp";
  lebibipqp.operations = {"lebibipqp"};
  lebibipqp.type = "tool";

  lebibipqp.inTypes = {};
  lebibipqp.inTypes.push_back("http://edamontology.org/data_0863");
  lebibipqp.inTypes.push_back("http://edamontology.org/data_2048");
  lebibipqp.inTypes.push_back("http://edamontology.org/data_3272");
  lebibipqp.inTypes.push_back("http://edamontology.org/data_0857");
  sort (lebibipqp.inTypes.begin(),lebibipqp.inTypes.end());
  lebibipqp.output = "http://edamontology.org/data_2044";
  lebibipqp.output = "http://edamontology.org/data_1056";
  biotools.push_back(lebibipqp);

  Tool ledpred;
  ledpred.id = "ledpred";
  ledpred.operations = {"ledpred"};
  ledpred.type = "tool";

  ledpred.inTypes = {};
  ledpred.inTypes.push_back("http://edamontology.org/data_2884");
  ledpred.inTypes.push_back("http://edamontology.org/data_0950");
  ledpred.inTypes.push_back("http://edamontology.org/data_1772");
  sort (ledpred.inTypes.begin(),ledpred.inTypes.end());
  ledpred.output = "http://edamontology.org/data_1276";
  ledpred.output = "http://edamontology.org/data_2854";
  biotools.push_back(ledpred);

  Tool legiolist;
  legiolist.id = "legiolist";
  legiolist.operations = {"legiolist"};
  legiolist.type = "tool";

  legiolist.inTypes = {};
  legiolist.inTypes.push_back("http://edamontology.org/data_0916");
  sort (legiolist.inTypes.begin(),legiolist.inTypes.end());
  legiolist.output = "http://edamontology.org/data_1097";
  biotools.push_back(legiolist);

  Tool leproma;
  leproma.id = "leproma";
  leproma.operations = {"leproma"};
  leproma.type = "tool";

  leproma.inTypes = {};
  leproma.inTypes.push_back("http://edamontology.org/data_0916");
  sort (leproma.inTypes.begin(),leproma.inTypes.end());
  leproma.output = "http://edamontology.org/data_1097";
  biotools.push_back(leproma);

  Tool lgicdb;
  lgicdb.id = "lgicdb";
  lgicdb.operations = {"lgicdb"};
  lgicdb.type = "tool";

  lgicdb.inTypes = {};
  lgicdb.inTypes.push_back("http://edamontology.org/data_1277");
  sort (lgicdb.inTypes.begin(),lgicdb.inTypes.end());
  lgicdb.output = "http://edamontology.org/data_2797";
  biotools.push_back(lgicdb);

  Tool lightdock;
  lightdock.id = "lightdock";
  lightdock.operations = {"lightdock"};
  lightdock.type = "tool";

  lightdock.inTypes = {};
  lightdock.inTypes.push_back("http://edamontology.org/data_2877");
  sort (lightdock.inTypes.begin(),lightdock.inTypes.end());
  lightdock.output = "http://edamontology.org/data_2877";
  biotools.push_back(lightdock);

  Tool listinputs;
  listinputs.id = "listinputs";
  listinputs.operations = {"listinputs"};
  listinputs.type = "tool";

  listinputs.inTypes = {};
  listinputs.inTypes.push_back("http://edamontology.org/data_0006");
  sort (listinputs.inTypes.begin(),listinputs.inTypes.end());
  listinputs.output = "http://edamontology.org/data_0006";
  listinputs.output = "http://edamontology.org/data_0006";
  biotools.push_back(listinputs);

  Tool mageri;
  mageri.id = "mageri";
  mageri.operations = {"mageri"};
  mageri.type = "tool";

  mageri.inTypes = {};
  mageri.inTypes.push_back("http://edamontology.org/data_2955");
  sort (mageri.inTypes.begin(),mageri.inTypes.end());
  mageri.output = "http://edamontology.org/data_0848";
  mageri.output = "http://edamontology.org/data_2337";
  biotools.push_back(mageri);

  Tool maizegdb;
  maizegdb.id = "maizegdb";
  maizegdb.operations = {"maizegdb"};
  maizegdb.type = "tool";

  maizegdb.inTypes = {};
  maizegdb.inTypes.push_back("http://edamontology.org/data_3134");
  sort (maizegdb.inTypes.begin(),maizegdb.inTypes.end());
  maizegdb.output = "http://edamontology.org/data_2798";
  biotools.push_back(maizegdb);

  Tool malaria_data_blast_search;
  malaria_data_blast_search.id = "malaria_data_blast_search";
  malaria_data_blast_search.operations = {"malaria_data_blast_search"};
  malaria_data_blast_search.type = "tool";

  malaria_data_blast_search.inTypes = {};
  malaria_data_blast_search.inTypes.push_back("http://edamontology.org/data_0857");
  sort (malaria_data_blast_search.inTypes.begin(),malaria_data_blast_search.inTypes.end());
  malaria_data_blast_search.output = "http://edamontology.org/data_2976";
  biotools.push_back(malaria_data_blast_search);

  Tool mapperanalyzer;
  mapperanalyzer.id = "mapperanalyzer";
  mapperanalyzer.operations = {"mapperanalyzer"};
  mapperanalyzer.type = "tool";

  mapperanalyzer.inTypes = {};
  mapperanalyzer.inTypes.push_back("http://edamontology.org/data_0006");
  sort (mapperanalyzer.inTypes.begin(),mapperanalyzer.inTypes.end());
  mapperanalyzer.output = "http://edamontology.org/data_3002";
  mapperanalyzer.output = "http://edamontology.org/data_0006";
  mapperanalyzer.output = "http://edamontology.org/data_0924";
  mapperanalyzer.output = "http://edamontology.org/data_0924";
  mapperanalyzer.output = "http://edamontology.org/data_0006";
  mapperanalyzer.output = "http://edamontology.org/data_0863";
  mapperanalyzer.output = "http://edamontology.org/data_0006";
  mapperanalyzer.output = "http://edamontology.org/data_0006";
  biotools.push_back(mapperanalyzer);

  Tool mbwa_wrapper;
  mbwa_wrapper.id = "mbwa_wrapper";
  mbwa_wrapper.operations = {"mbwa_wrapper"};
  mbwa_wrapper.type = "tool";

  mbwa_wrapper.inTypes = {};
  mbwa_wrapper.inTypes.push_back("http://edamontology.org/data_0924");
  sort (mbwa_wrapper.inTypes.begin(),mbwa_wrapper.inTypes.end());
  mbwa_wrapper.output = "http://edamontology.org/data_0863";
  mbwa_wrapper.output = "http://edamontology.org/data_0006";
  biotools.push_back(mbwa_wrapper);

  Tool merops_blast;
  merops_blast.id = "merops_blast";
  merops_blast.operations = {"merops_blast"};
  merops_blast.type = "tool";

  merops_blast.inTypes = {};
  merops_blast.inTypes.push_back("http://edamontology.org/data_1277");
  merops_blast.inTypes.push_back("http://edamontology.org/data_0857");
  sort (merops_blast.inTypes.begin(),merops_blast.inTypes.end());
  merops_blast.output = "http://edamontology.org/data_2976";
  merops_blast.output = "http://edamontology.org/data_3494";
  biotools.push_back(merops_blast);

  Tool metaQuantome;
  metaQuantome.id = "metaQuantome";
  metaQuantome.operations = {"metaQuantome"};
  metaQuantome.type = "tool";

  metaQuantome.inTypes = {};
  metaQuantome.inTypes.push_back("http://edamontology.org/data_2583");
  metaQuantome.inTypes.push_back("http://edamontology.org/data_2603");
  metaQuantome.inTypes.push_back("http://edamontology.org/data_3028");
  sort (metaQuantome.inTypes.begin(),metaQuantome.inTypes.end());
  metaQuantome.output = "http://edamontology.org/data_0945";
  metaQuantome.output = "http://edamontology.org/data_2603";
  metaQuantome.output = "http://edamontology.org/data_1872";
  metaQuantome.output = "http://edamontology.org/data_2583";
  metaQuantome.output = "http://edamontology.org/data_1011";
  biotools.push_back(metaQuantome);

  Tool metexplore;
  metexplore.id = "metexplore";
  metexplore.operations = {"metexplore"};
  metexplore.type = "tool";

  metexplore.inTypes = {};
  metexplore.inTypes.push_back("http://edamontology.org/data_2600");
  sort (metexplore.inTypes.begin(),metexplore.inTypes.end());
  metexplore.output = "http://edamontology.org/data_2600";
  biotools.push_back(metexplore);

  Tool mfungd;
  mfungd.id = "mfungd";
  mfungd.operations = {"mfungd"};
  mfungd.type = "tool";

  mfungd.inTypes = {};
  mfungd.inTypes.push_back("http://edamontology.org/data_0916");
  sort (mfungd.inTypes.begin(),mfungd.inTypes.end());
  mfungd.output = "http://edamontology.org/data_2799";
  biotools.push_back(mfungd);

  Tool mgi;
  mgi.id = "mgi";
  mgi.operations = {"mgi"};
  mgi.type = "tool";

  mgi.inTypes = {};
  mgi.inTypes.push_back("http://edamontology.org/data_2093");
  sort (mgi.inTypes.begin(),mgi.inTypes.end());
  mgi.output = "http://edamontology.org/data_1026";
  biotools.push_back(mgi);

  Tool mgx;
  mgx.id = "mgx";
  mgx.operations = {"mgx"};
  mgx.type = "tool";

  mgx.inTypes = {};
  mgx.inTypes.push_back("http://edamontology.org/data_3028");
  mgx.inTypes.push_back("http://edamontology.org/data_2048");
  mgx.inTypes.push_back("http://edamontology.org/data_2884");
  mgx.inTypes.push_back("http://edamontology.org/data_2600");
  sort (mgx.inTypes.begin(),mgx.inTypes.end());
  mgx.output = "http://edamontology.org/data_2975";
  biotools.push_back(mgx);

  Tool microbial_advanced_database_organisation_micado;
  microbial_advanced_database_organisation_micado.id = "microbial_advanced_database_organisation_micado";
  microbial_advanced_database_organisation_micado.operations = {"microbial_advanced_database_organisation_micado"};
  microbial_advanced_database_organisation_micado.type = "tool";

  microbial_advanced_database_organisation_micado.inTypes = {};
  microbial_advanced_database_organisation_micado.inTypes.push_back("http://edamontology.org/data_2093");
  sort (microbial_advanced_database_organisation_micado.inTypes.begin(),microbial_advanced_database_organisation_micado.inTypes.end());
  microbial_advanced_database_organisation_micado.output = "http://edamontology.org/data_1026";
  biotools.push_back(microbial_advanced_database_organisation_micado);

  Tool minepath;
  minepath.id = "minepath";
  minepath.operations = {"minepath"};
  minepath.type = "tool";

  minepath.inTypes = {};
  minepath.inTypes.push_back("http://edamontology.org/data_2600");
  sort (minepath.inTypes.begin(),minepath.inTypes.end());
  minepath.output = "http://edamontology.org/data_2603";
  minepath.output = "http://edamontology.org/data_2600";
  biotools.push_back(minepath);

  Tool mirgen;
  mirgen.id = "mirgen";
  mirgen.operations = {"mirgen"};
  mirgen.type = "tool";

  mirgen.inTypes = {};
  mirgen.inTypes.push_back("http://edamontology.org/data_3134");
  mirgen.inTypes.push_back("http://edamontology.org/data_0880");
  sort (mirgen.inTypes.begin(),mirgen.inTypes.end());
  mirgen.output = "http://edamontology.org/data_1097";
  mirgen.output = "http://edamontology.org/data_1869";
  biotools.push_back(mirgen);

  Tool mlst_db;
  mlst_db.id = "mlst_db";
  mlst_db.operations = {"mlst_db"};
  mlst_db.type = "tool";

  mlst_db.inTypes = {};
  mlst_db.inTypes.push_back("http://edamontology.org/data_1255");
  sort (mlst_db.inTypes.begin(),mlst_db.inTypes.end());
  mlst_db.output = "http://edamontology.org/data_2044";
  biotools.push_back(mlst_db);

  Tool mmb_api;
  mmb_api.id = "mmb_api";
  mmb_api.operations = {"mmb_api"};
  mmb_api.type = "tool";

  mmb_api.inTypes = {};
  mmb_api.inTypes.push_back("http://edamontology.org/data_0883");
  mmb_api.inTypes.push_back("http://edamontology.org/data_2886");
  mmb_api.inTypes.push_back("http://edamontology.org/data_2974");
  mmb_api.inTypes.push_back("http://edamontology.org/data_1463");
  sort (mmb_api.inTypes.begin(),mmb_api.inTypes.end());
  mmb_api.output = "http://edamontology.org/data_1127";
  mmb_api.output = "http://edamontology.org/data_3021";
  mmb_api.output = "http://edamontology.org/data_1011";
  mmb_api.output = "http://edamontology.org/data_1005";
  biotools.push_back(mmb_api);

  Tool mobidb;
  mobidb.id = "mobidb";
  mobidb.operations = {"mobidb"};
  mobidb.type = "tool";

  mobidb.inTypes = {};
  mobidb.inTypes.push_back("http://edamontology.org/data_1255");
  sort (mobidb.inTypes.begin(),mobidb.inTypes.end());
  mobidb.output = "http://edamontology.org/data_3021";
  mobidb.output = "http://edamontology.org/data_2007";
  biotools.push_back(mobidb);

  Tool modbase;
  modbase.id = "modbase";
  modbase.operations = {"modbase"};
  modbase.type = "tool";

  modbase.inTypes = {};
  modbase.inTypes.push_back("http://edamontology.org/data_1537");
  sort (modbase.inTypes.begin(),modbase.inTypes.end());
  modbase.output = "http://edamontology.org/data_3021";
  biotools.push_back(modbase);

  Tool molmeth;
  molmeth.id = "molmeth";
  molmeth.operations = {"molmeth"};
  molmeth.type = "tool";

  molmeth.inTypes = {};
  molmeth.inTypes.push_back("http://edamontology.org/data_2337");
  sort (molmeth.inTypes.begin(),molmeth.inTypes.end());
  molmeth.output = "http://edamontology.org/data_0968";
  biotools.push_back(molmeth);

  Tool monocle;
  monocle.id = "monocle";
  monocle.operations = {"monocle"};
  monocle.type = "tool";

  monocle.inTypes = {};
  monocle.inTypes.push_back("http://edamontology.org/data_1713");
  sort (monocle.inTypes.begin(),monocle.inTypes.end());
  monocle.output = "http://edamontology.org/data_2603";
  biotools.push_back(monocle);

  Tool monosaccharidedb;
  monosaccharidedb.id = "monosaccharidedb";
  monosaccharidedb.operations = {"monosaccharidedb"};
  monosaccharidedb.type = "tool";

  monosaccharidedb.inTypes = {};
  monosaccharidedb.inTypes.push_back("http://edamontology.org/data_2313");
  sort (monosaccharidedb.inTypes.begin(),monosaccharidedb.inTypes.end());
  monosaccharidedb.output = "http://edamontology.org/data_2746";
  biotools.push_back(monosaccharidedb);

  Tool mpblast;
  mpblast.id = "mpblast";
  mpblast.operations = {"mpblast"};
  mpblast.type = "tool";

  mpblast.inTypes = {};
  mpblast.inTypes.push_back("http://edamontology.org/data_0857");
  sort (mpblast.inTypes.begin(),mpblast.inTypes.end());
  mpblast.output = "http://edamontology.org/data_2044";
  biotools.push_back(mpblast);

  Tool mugvre;
  mugvre.id = "mugvre";
  mugvre.operations = {"mugvre"};
  mugvre.type = "tool";

  mugvre.inTypes = {};
  mugvre.inTypes.push_back("http://edamontology.org/data_0863");
  sort (mugvre.inTypes.begin(),mugvre.inTypes.end());
  mugvre.output = "http://edamontology.org/data_2044";
  mugvre.output = "http://edamontology.org/data_3210";
  biotools.push_back(mugvre);

  Tool multiplierz;
  multiplierz.id = "multiplierz";
  multiplierz.operations = {"multiplierz"};
  multiplierz.type = "tool";

  multiplierz.inTypes = {};
  multiplierz.inTypes.push_back("http://edamontology.org/data_2536");
  sort (multiplierz.inTypes.begin(),multiplierz.inTypes.end());
  multiplierz.output = "http://edamontology.org/data_2536";
  multiplierz.output = "http://edamontology.org/data_3786";
  biotools.push_back(multiplierz);

  Tool ncbi_dbprobe;
  ncbi_dbprobe.id = "ncbi_dbprobe";
  ncbi_dbprobe.operations = {"ncbi_dbprobe"};
  ncbi_dbprobe.type = "tool";

  ncbi_dbprobe.inTypes = {};
  ncbi_dbprobe.inTypes.push_back("http://edamontology.org/data_2717");
  sort (ncbi_dbprobe.inTypes.begin(),ncbi_dbprobe.inTypes.end());
  ncbi_dbprobe.output = "http://edamontology.org/data_2719";
  biotools.push_back(ncbi_dbprobe);

  Tool ncbi_gene;
  ncbi_gene.id = "ncbi_gene";
  ncbi_gene.operations = {"ncbi_gene"};
  ncbi_gene.type = "tool";

  ncbi_gene.inTypes = {};
  ncbi_gene.inTypes.push_back("http://edamontology.org/data_0916");
  sort (ncbi_gene.inTypes.begin(),ncbi_gene.inTypes.end());
  ncbi_gene.output = "http://edamontology.org/data_0842";
  biotools.push_back(ncbi_gene);

  Tool netter;
  netter.id = "netter";
  netter.operations = {"netter"};
  netter.type = "tool";

  netter.inTypes = {};
  netter.inTypes.push_back("http://edamontology.org/data_2600");
  sort (netter.inTypes.begin(),netter.inTypes.end());
  netter.output = "http://edamontology.org/data_2600";
  biotools.push_back(netter);

  Tool nextbio;
  nextbio.id = "nextbio";
  nextbio.operations = {"nextbio"};
  nextbio.type = "tool";

  nextbio.inTypes = {};
  nextbio.inTypes.push_back("http://edamontology.org/data_0916");
  sort (nextbio.inTypes.begin(),nextbio.inTypes.end());
  nextbio.output = "http://edamontology.org/data_0842";
  biotools.push_back(nextbio);

  Tool nf_core_viralrecon;
  nf_core_viralrecon.id = "nf_core_viralrecon";
  nf_core_viralrecon.operations = {"nf_core_viralrecon"};
  nf_core_viralrecon.type = "tool";

  nf_core_viralrecon.inTypes = {};
  nf_core_viralrecon.inTypes.push_back("http://edamontology.org/data_1383");
  nf_core_viralrecon.inTypes.push_back("http://edamontology.org/data_0925");
  nf_core_viralrecon.inTypes.push_back("http://edamontology.org/data_3498");
  nf_core_viralrecon.inTypes.push_back("http://edamontology.org/data_3914");
  sort (nf_core_viralrecon.inTypes.begin(),nf_core_viralrecon.inTypes.end());
  nf_core_viralrecon.output = "http://edamontology.org/data_3494";
  biotools.push_back(nf_core_viralrecon);

  Tool ngmlr;
  ngmlr.id = "ngmlr";
  ngmlr.operations = {"ngmlr"};
  ngmlr.type = "tool";

  ngmlr.inTypes = {};
  ngmlr.inTypes.push_back("http://edamontology.org/data_1383");
  sort (ngmlr.inTypes.begin(),ngmlr.inTypes.end());
  ngmlr.output = "http://edamontology.org/data_3497";
  ngmlr.output = "http://edamontology.org/data_2093";
  biotools.push_back(ngmlr);

  Tool nibr_2d_page;
  nibr_2d_page.id = "nibr_2d_page";
  nibr_2d_page.operations = {"nibr_2d_page"};
  nibr_2d_page.type = "tool";

  nibr_2d_page.inTypes = {};
  nibr_2d_page.inTypes.push_back("http://edamontology.org/data_2531");
  sort (nibr_2d_page.inTypes.begin(),nibr_2d_page.inTypes.end());
  nibr_2d_page.output = "http://edamontology.org/data_1096";
  biotools.push_back(nibr_2d_page);

  Tool nimefi;
  nimefi.id = "nimefi";
  nimefi.operations = {"nimefi"};
  nimefi.type = "tool";

  nimefi.inTypes = {};
  nimefi.inTypes.push_back("http://edamontology.org/data_2600");
  sort (nimefi.inTypes.begin(),nimefi.inTypes.end());
  nimefi.output = "http://edamontology.org/data_2603";
  biotools.push_back(nimefi);

  Tool nmpdr;
  nmpdr.id = "nmpdr";
  nmpdr.operations = {"nmpdr"};
  nmpdr.type = "tool";

  nmpdr.inTypes = {};
  nmpdr.inTypes.push_back("http://edamontology.org/data_0916");
  sort (nmpdr.inTypes.begin(),nmpdr.inTypes.end());
  nmpdr.output = "http://edamontology.org/data_1179";
  biotools.push_back(nmpdr);

  Tool nutrichem;
  nutrichem.id = "nutrichem";
  nutrichem.operations = {"nutrichem"};
  nutrichem.type = "tool";

  nutrichem.inTypes = {};
  nutrichem.inTypes.push_back("http://edamontology.org/data_1082");
  sort (nutrichem.inTypes.begin(),nutrichem.inTypes.end());
  nutrichem.output = "http://edamontology.org/data_0990";
  nutrichem.output = "http://edamontology.org/data_1150";
  biotools.push_back(nutrichem);

  Tool oi_gene;
  oi_gene.id = "oi_gene";
  oi_gene.operations = {"oi_gene"};
  oi_gene.type = "tool";

  oi_gene.inTypes = {};
  oi_gene.inTypes.push_back("http://edamontology.org/data_3498");
  sort (oi_gene.inTypes.begin(),oi_gene.inTypes.end());
  oi_gene.output = "http://edamontology.org/data_0957";
  biotools.push_back(oi_gene);

  Tool orange;
  orange.id = "orange";
  orange.operations = {"orange"};
  orange.type = "tool";

  orange.inTypes = {};
  orange.inTypes.push_back("http://edamontology.org/data_0582");
  orange.inTypes.push_back("http://edamontology.org/data_2082");
  sort (orange.inTypes.begin(),orange.inTypes.end());
  orange.output = "http://edamontology.org/data_0582";
  orange.output = "http://edamontology.org/data_2082";
  biotools.push_back(orange);

  Tool orphanet;
  orphanet.id = "orphanet";
  orphanet.operations = {"orphanet"};
  orphanet.type = "tool";

  orphanet.inTypes = {};
  orphanet.inTypes.push_back("http://edamontology.org/data_1622");
  sort (orphanet.inTypes.begin(),orphanet.inTypes.end());
  orphanet.output = "http://edamontology.org/data_2800";
  biotools.push_back(orphanet);

  Tool orthodisease;
  orthodisease.id = "orthodisease";
  orthodisease.operations = {"orthodisease"};
  orthodisease.type = "tool";

  orthodisease.inTypes = {};
  orthodisease.inTypes.push_back("http://edamontology.org/data_1622");
  sort (orthodisease.inTypes.begin(),orthodisease.inTypes.end());
  orthodisease.output = "http://edamontology.org/data_1150";
  biotools.push_back(orthodisease);

  Tool p53;
  p53.id = "p53";
  p53.operations = {"p53"};
  p53.type = "tool";

  p53.inTypes = {};
  p53.inTypes.push_back("http://edamontology.org/data_1277");
  sort (p53.inTypes.begin(),p53.inTypes.end());
  p53.output = "http://edamontology.org/data_1277";
  biotools.push_back(p53);

  Tool parameciumdb;
  parameciumdb.id = "parameciumdb";
  parameciumdb.operations = {"parameciumdb"};
  parameciumdb.type = "tool";

  parameciumdb.inTypes = {};
  parameciumdb.inTypes.push_back("http://edamontology.org/data_2080");
  parameciumdb.inTypes.push_back("http://edamontology.org/data_0857");
  parameciumdb.inTypes.push_back("http://edamontology.org/data_2603");
  sort (parameciumdb.inTypes.begin(),parameciumdb.inTypes.end());
  parameciumdb.output = "http://edamontology.org/data_3494";
  parameciumdb.output = "http://edamontology.org/data_1255";
  parameciumdb.output = "http://edamontology.org/data_2603";
  biotools.push_back(parameciumdb);

  Tool pasta;
  pasta.id = "pasta";
  pasta.operations = {"pasta"};
  pasta.type = "tool";

  pasta.inTypes = {};
  pasta.inTypes.push_back("http://edamontology.org/data_1255");
  sort (pasta.inTypes.begin(),pasta.inTypes.end());
  pasta.output = "http://edamontology.org/data_2976";
  biotools.push_back(pasta);

  Tool pathfindR;
  pathfindR.id = "pathfindR";
  pathfindR.operations = {"pathfindR"};
  pathfindR.type = "tool";

  pathfindR.inTypes = {};
  pathfindR.inTypes.push_back("http://edamontology.org/data_3753");
  pathfindR.inTypes.push_back("http://edamontology.org/data_1669");
  pathfindR.inTypes.push_back("http://edamontology.org/data_2884");
  pathfindR.inTypes.push_back("http://edamontology.org/data_2048");
  sort (pathfindR.inTypes.begin(),pathfindR.inTypes.end());
  pathfindR.output = "http://edamontology.org/data_1026";
  pathfindR.output = "http://edamontology.org/data_1669";
  biotools.push_back(pathfindR);

  Tool pbg_ld;
  pbg_ld.id = "pbg_ld";
  pbg_ld.operations = {"pbg_ld"};
  pbg_ld.type = "tool";

  pbg_ld.inTypes = {};
  pbg_ld.inTypes.push_back("http://edamontology.org/data_2080");
  sort (pbg_ld.inTypes.begin(),pbg_ld.inTypes.end());
  pbg_ld.output = "http://edamontology.org/data_0842";
  biotools.push_back(pbg_ld);

  Tool pcsf;
  pcsf.id = "pcsf";
  pcsf.operations = {"pcsf"};
  pcsf.type = "tool";

  pcsf.inTypes = {};
  pcsf.inTypes.push_back("http://edamontology.org/data_2600");
  sort (pcsf.inTypes.begin(),pcsf.inTypes.end());
  pcsf.output = "http://edamontology.org/data_2600";
  biotools.push_back(pcsf);

  Tool pdb_redo;
  pdb_redo.id = "pdb_redo";
  pdb_redo.operations = {"pdb_redo"};
  pdb_redo.type = "tool";

  pdb_redo.inTypes = {};
  pdb_redo.inTypes.push_back("http://edamontology.org/data_0883");
  pdb_redo.inTypes.push_back("http://edamontology.org/data_1539");
  pdb_redo.inTypes.push_back("http://edamontology.org/data_0937");
  pdb_redo.inTypes.push_back("http://edamontology.org/data_1460");
  sort (pdb_redo.inTypes.begin(),pdb_redo.inTypes.end());
  pdb_redo.output = "http://edamontology.org/data_1127";
  biotools.push_back(pdb_redo);

  Tool pdbfinder;
  pdbfinder.id = "pdbfinder";
  pdbfinder.operations = {"pdbfinder"};
  pdbfinder.type = "tool";

  pdbfinder.inTypes = {};
  pdbfinder.inTypes.push_back("http://edamontology.org/data_2085");
  sort (pdbfinder.inTypes.begin(),pdbfinder.inTypes.end());
  pdbfinder.output = "http://edamontology.org/data_1127";
  biotools.push_back(pdbfinder);

  Tool pdbsum;
  pdbsum.id = "pdbsum";
  pdbsum.operations = {"pdbsum"};
  pdbsum.type = "tool";

  pdbsum.inTypes = {};
  pdbsum.inTypes.push_back("http://edamontology.org/data_2085");
  sort (pdbsum.inTypes.begin(),pdbsum.inTypes.end());
  pdbsum.output = "http://edamontology.org/data_1127";
  biotools.push_back(pdbsum);

  Tool pdestrian;
  pdestrian.id = "pdestrian";
  pdestrian.operations = {"pdestrian"};
  pdestrian.type = "tool";

  pdestrian.inTypes = {};
  pdestrian.inTypes.push_back("http://edamontology.org/data_2526");
  pdestrian.inTypes.push_back("http://edamontology.org/data_1712");
  pdestrian.inTypes.push_back("http://edamontology.org/data_0954");
  pdestrian.inTypes.push_back("http://edamontology.org/data_2080");
  pdestrian.inTypes.push_back("http://edamontology.org/data_0982");
  pdestrian.inTypes.push_back("http://edamontology.org/data_0984");
  pdestrian.inTypes.push_back("http://edamontology.org/data_2050");
  pdestrian.inTypes.push_back("http://edamontology.org/data_0906");
  pdestrian.inTypes.push_back("http://edamontology.org/data_1461");
  pdestrian.inTypes.push_back("http://edamontology.org/data_0897");
  pdestrian.inTypes.push_back("http://edamontology.org/data_2992");
  pdestrian.inTypes.push_back("http://edamontology.org/data_1537");
  pdestrian.inTypes.push_back("http://edamontology.org/data_0893");
  pdestrian.inTypes.push_back("http://edamontology.org/data_1463");
  pdestrian.inTypes.push_back("http://edamontology.org/data_1481");
  pdestrian.inTypes.push_back("http://edamontology.org/data_0890");
  pdestrian.inTypes.push_back("http://edamontology.org/data_0889");
  pdestrian.inTypes.push_back("http://edamontology.org/data_0888");
  pdestrian.inTypes.push_back("http://edamontology.org/data_1498");
  sort (pdestrian.inTypes.begin(),pdestrian.inTypes.end());
  pdestrian.output = "http://edamontology.org/data_1460";
  pdestrian.output = "http://edamontology.org/data_2886";
  biotools.push_back(pdestrian);

  Tool pecan_dia;
  pecan_dia.id = "pecan_dia";
  pecan_dia.operations = {"pecan_dia"};
  pecan_dia.type = "tool";

  pecan_dia.inTypes = {};
  pecan_dia.inTypes.push_back("http://edamontology.org/data_0945");
  pecan_dia.inTypes.push_back("http://edamontology.org/data_0943");
  sort (pecan_dia.inTypes.begin(),pecan_dia.inTypes.end());
  pecan_dia.output = "http://edamontology.org/data_0943";
  pecan_dia.output = "http://edamontology.org/data_0850";
  biotools.push_back(pecan_dia);

  Tool peptideatlas;
  peptideatlas.id = "peptideatlas";
  peptideatlas.operations = {"peptideatlas"};
  peptideatlas.type = "tool";

  peptideatlas.inTypes = {};
  peptideatlas.inTypes.push_back("http://edamontology.org/data_0945");
  sort (peptideatlas.inTypes.begin(),peptideatlas.inTypes.end());
  peptideatlas.output = "http://edamontology.org/data_2398";
  biotools.push_back(peptideatlas);

  Tool peroxibase;
  peroxibase.id = "peroxibase";
  peroxibase.operations = {"peroxibase"};
  peroxibase.type = "tool";

  peroxibase.inTypes = {};
  peroxibase.inTypes.push_back("http://edamontology.org/data_0896");
  sort (peroxibase.inTypes.begin(),peroxibase.inTypes.end());
  peroxibase.output = "http://edamontology.org/data_2792";
  biotools.push_back(peroxibase);

  Tool pfam;
  pfam.id = "pfam";
  pfam.operations = {"pfam"};
  pfam.type = "tool";

  pfam.inTypes = {};
  pfam.inTypes.push_back("http://edamontology.org/data_2976");
  sort (pfam.inTypes.begin(),pfam.inTypes.end());
  pfam.output = "http://edamontology.org/data_1138";
  biotools.push_back(pfam);

  Tool pharmgkb;
  pharmgkb.id = "pharmgkb";
  pharmgkb.operations = {"pharmgkb"};
  pharmgkb.type = "tool";

  pharmgkb.inTypes = {};
  pharmgkb.inTypes.push_back("http://edamontology.org/data_0916");
  sort (pharmgkb.inTypes.begin(),pharmgkb.inTypes.end());
  pharmgkb.output = "http://edamontology.org/data_2649";
  biotools.push_back(pharmgkb);

  Tool phmmer;
  phmmer.id = "phmmer";
  phmmer.operations = {"phmmer"};
  phmmer.type = "tool";

  phmmer.inTypes = {};
  phmmer.inTypes.push_back("http://edamontology.org/data_1394");
  phmmer.inTypes.push_back("http://edamontology.org/data_3028");
  phmmer.inTypes.push_back("http://edamontology.org/data_2085");
  sort (phmmer.inTypes.begin(),phmmer.inTypes.end());
  phmmer.output = "http://edamontology.org/data_3671";
  biotools.push_back(phmmer);

  Tool phosphoelm;
  phosphoelm.id = "phosphoelm";
  phosphoelm.operations = {"phosphoelm"};
  phosphoelm.type = "tool";

  phosphoelm.inTypes = {};
  phosphoelm.inTypes.push_back("http://edamontology.org/data_2071");
  sort (phosphoelm.inTypes.begin(),phosphoelm.inTypes.end());
  phosphoelm.output = "http://edamontology.org/data_1009";
  biotools.push_back(phosphoelm);

  Tool picard_replacesamheader;
  picard_replacesamheader.id = "picard_replacesamheader";
  picard_replacesamheader.operations = {"picard_replacesamheader"};
  picard_replacesamheader.type = "tool";

  picard_replacesamheader.inTypes = {};
  picard_replacesamheader.inTypes.push_back("http://edamontology.org/data_0924");
  sort (picard_replacesamheader.inTypes.begin(),picard_replacesamheader.inTypes.end());
  picard_replacesamheader.output = "http://edamontology.org/data_0006";
  picard_replacesamheader.output = "http://edamontology.org/data_0006";
  biotools.push_back(picard_replacesamheader);

  Tool picky;
  picky.id = "picky";
  picky.operations = {"picky"};
  picky.type = "tool";

  picky.inTypes = {};
  picky.inTypes.push_back("http://edamontology.org/data_1383");
  picky.inTypes.push_back("http://edamontology.org/data_3498");
  sort (picky.inTypes.begin(),picky.inTypes.end());
  picky.output = "http://edamontology.org/data_3497";
  picky.output = "http://edamontology.org/data_2093";
  biotools.push_back(picky);

  Tool pid;
  pid.id = "pid";
  pid.operations = {"pid"};
  pid.type = "tool";

  pid.inTypes = {};
  pid.inTypes.push_back("http://edamontology.org/data_2984");
  sort (pid.inTypes.begin(),pid.inTypes.end());
  pid.output = "http://edamontology.org/data_2344";
  biotools.push_back(pid);

  Tool pir;
  pir.id = "pir";
  pir.operations = {"pir"};
  pir.type = "tool";

  pir.inTypes = {};
  pir.inTypes.push_back("http://edamontology.org/data_0849");
  sort (pir.inTypes.begin(),pir.inTypes.end());
  pir.output = "http://edamontology.org/data_0989";
  biotools.push_back(pir);

  Tool pirsf;
  pirsf.id = "pirsf";
  pirsf.operations = {"pirsf"};
  pirsf.type = "tool";

  pirsf.inTypes = {};
  pirsf.inTypes.push_back("http://edamontology.org/data_0907");
  sort (pirsf.inTypes.begin(),pirsf.inTypes.end());
  pirsf.output = "http://edamontology.org/data_1136";
  biotools.push_back(pirsf);

  Tool plasmodb;
  plasmodb.id = "plasmodb";
  plasmodb.operations = {"plasmodb"};
  plasmodb.type = "tool";

  plasmodb.inTypes = {};
  plasmodb.inTypes.push_back("http://edamontology.org/data_0916");
  sort (plasmodb.inTypes.begin(),plasmodb.inTypes.end());
  plasmodb.output = "http://edamontology.org/data_2295";
  biotools.push_back(plasmodb);

  Tool pmap_cutdb;
  pmap_cutdb.id = "pmap_cutdb";
  pmap_cutdb.operations = {"pmap_cutdb"};
  pmap_cutdb.type = "tool";

  pmap_cutdb.inTypes = {};
  pmap_cutdb.inTypes.push_back("http://edamontology.org/data_2093");
  sort (pmap_cutdb.inTypes.begin(),pmap_cutdb.inTypes.end());
  pmap_cutdb.output = "http://edamontology.org/data_3021";
  biotools.push_back(pmap_cutdb);

  Tool ppi;
  ppi.id = "ppi";
  ppi.operations = {"ppi"};
  ppi.type = "tool";

  ppi.inTypes = {};
  ppi.inTypes.push_back("http://edamontology.org/data_1772");
  sort (ppi.inTypes.begin(),ppi.inTypes.end());
  ppi.output = "http://edamontology.org/data_1460";
  biotools.push_back(ppi);

  Tool ppiexp;
  ppiexp.id = "ppiexp";
  ppiexp.operations = {"ppiexp"};
  ppiexp.type = "tool";

  ppiexp.inTypes = {};
  ppiexp.inTypes.push_back("http://edamontology.org/data_2600");
  ppiexp.inTypes.push_back("http://edamontology.org/data_3768");
  sort (ppiexp.inTypes.begin(),ppiexp.inTypes.end());
  ppiexp.output = "http://edamontology.org/data_2603";
  biotools.push_back(ppiexp);

  Tool pptasedb;
  pptasedb.id = "pptasedb";
  pptasedb.operations = {"pptasedb"};
  pptasedb.type = "tool";

  pptasedb.inTypes = {};
  pptasedb.inTypes.push_back("http://edamontology.org/data_0896");
  sort (pptasedb.inTypes.begin(),pptasedb.inTypes.end());
  pptasedb.output = "http://edamontology.org/data_0989";
  biotools.push_back(pptasedb);

  Tool predictprotein_open;
  predictprotein_open.id = "predictprotein_open";
  predictprotein_open.operations = {"predictprotein_open"};
  predictprotein_open.type = "tool";

  predictprotein_open.inTypes = {};
  predictprotein_open.inTypes.push_back("http://edamontology.org/data_0896");
  sort (predictprotein_open.inTypes.begin(),predictprotein_open.inTypes.end());
  predictprotein_open.output = "http://edamontology.org/data_2976";
  biotools.push_back(predictprotein_open);

  Tool pride;
  pride.id = "pride";
  pride.operations = {"pride"};
  pride.type = "tool";

  pride.inTypes = {};
  pride.inTypes.push_back("http://edamontology.org/data_0945");
  sort (pride.inTypes.begin(),pride.inTypes.end());
  pride.output = "http://edamontology.org/data_1145";
  biotools.push_back(pride);

  Tool prints;
  prints.id = "prints";
  prints.operations = {"prints"};
  prints.type = "tool";

  prints.inTypes = {};
  prints.inTypes.push_back("http://edamontology.org/data_1355");
  sort (prints.inTypes.begin(),prints.inTypes.end());
  prints.output = "http://edamontology.org/data_1137";
  biotools.push_back(prints);

  Tool proabc;
  proabc.id = "proabc";
  proabc.operations = {"proabc"};
  proabc.type = "tool";

  proabc.inTypes = {};
  proabc.inTypes.push_back("http://edamontology.org/data_0906");
  sort (proabc.inTypes.begin(),proabc.inTypes.end());
  proabc.output = "http://edamontology.org/data_2976";
  biotools.push_back(proabc);

  Tool prodom;
  prodom.id = "prodom";
  prodom.operations = {"prodom"};
  prodom.type = "tool";

  prodom.inTypes = {};
  prodom.inTypes.push_back("http://edamontology.org/data_0907");
  sort (prodom.inTypes.begin(),prodom.inTypes.end());
  prodom.output = "http://edamontology.org/data_1142";
  biotools.push_back(prodom);

  Tool profdisis;
  profdisis.id = "profdisis";
  profdisis.operations = {"profdisis"};
  profdisis.type = "tool";

  profdisis.inTypes = {};
  profdisis.inTypes.push_back("http://edamontology.org/data_1276");
  sort (profdisis.inTypes.begin(),profdisis.inTypes.end());
  profdisis.output = "http://edamontology.org/data_2886";
  biotools.push_back(profdisis);

  Tool profisis;
  profisis.id = "profisis";
  profisis.operations = {"profisis"};
  profisis.type = "tool";

  profisis.inTypes = {};
  profisis.inTypes.push_back("http://edamontology.org/data_1276");
  sort (profisis.inTypes.begin(),profisis.inTypes.end());
  profisis.output = "http://edamontology.org/data_2886";
  biotools.push_back(profisis);

  Tool promex;
  promex.id = "promex";
  promex.operations = {"promex"};
  promex.type = "tool";

  promex.inTypes = {};
  promex.inTypes.push_back("http://edamontology.org/data_0945");
  sort (promex.inTypes.begin(),promex.inTypes.end());
  promex.output = "http://edamontology.org/data_0943";
  biotools.push_back(promex);

  Tool prophecy;
  prophecy.id = "prophecy";
  prophecy.operations = {"prophecy"};
  prophecy.type = "tool";

  prophecy.inTypes = {};
  prophecy.inTypes.push_back("http://edamontology.org/data_2337");
  sort (prophecy.inTypes.begin(),prophecy.inTypes.end());
  prophecy.output = "http://edamontology.org/data_0968";
  biotools.push_back(prophecy);

  Tool protein_model_portal;
  protein_model_portal.id = "protein_model_portal";
  protein_model_portal.operations = {"protein_model_portal"};
  protein_model_portal.type = "tool";

  protein_model_portal.inTypes = {};
  protein_model_portal.inTypes.push_back("http://edamontology.org/data_0896");
  sort (protein_model_portal.inTypes.begin(),protein_model_portal.inTypes.end());
  protein_model_portal.output = "http://edamontology.org/data_3021";
  biotools.push_back(protein_model_portal);

  Tool proteinatlas;
  proteinatlas.id = "proteinatlas";
  proteinatlas.operations = {"proteinatlas"};
  proteinatlas.type = "tool";

  proteinatlas.inTypes = {};
  proteinatlas.inTypes.push_back("http://edamontology.org/data_2603");
  sort (proteinatlas.inTypes.begin(),proteinatlas.inTypes.end());
  proteinatlas.output = "http://edamontology.org/data_0968";
  biotools.push_back(proteinatlas);

  Tool proteomicsdb;
  proteomicsdb.id = "proteomicsdb";
  proteomicsdb.operations = {"proteomicsdb"};
  proteomicsdb.type = "tool";

  proteomicsdb.inTypes = {};
  proteomicsdb.inTypes.push_back("http://edamontology.org/data_0896");
  proteomicsdb.inTypes.push_back("http://edamontology.org/data_2884");
  sort (proteomicsdb.inTypes.begin(),proteomicsdb.inTypes.end());
  proteomicsdb.output = "http://edamontology.org/data_1009";
  biotools.push_back(proteomicsdb);

  Tool protonet;
  protonet.id = "protonet";
  protonet.operations = {"protonet"};
  protonet.type = "tool";

  protonet.inTypes = {};
  protonet.inTypes.push_back("http://edamontology.org/data_0907");
  sort (protonet.inTypes.begin(),protonet.inTypes.end());
  protonet.output = "http://edamontology.org/data_3021";
  biotools.push_back(protonet);

  Tool proximid;
  proximid.id = "proximid";
  proximid.operations = {"proximid"};
  proximid.type = "tool";

  proximid.inTypes = {};
  proximid.inTypes.push_back("http://edamontology.org/data_2655");
  proximid.inTypes.push_back("http://edamontology.org/data_2048");
  sort (proximid.inTypes.begin(),proximid.inTypes.end());
  proximid.output = "http://edamontology.org/data_3112";
  biotools.push_back(proximid);

  Tool pseudocap;
  pseudocap.id = "pseudocap";
  pseudocap.operations = {"pseudocap"};
  pseudocap.type = "tool";

  pseudocap.inTypes = {};
  pseudocap.inTypes.push_back("http://edamontology.org/data_0916");
  sort (pseudocap.inTypes.begin(),pseudocap.inTypes.end());
  pseudocap.output = "http://edamontology.org/data_2744";
  biotools.push_back(pseudocap);

  Tool psi_blast;
  psi_blast.id = "psi_blast";
  psi_blast.operations = {"psi_blast"};
  psi_blast.type = "tool";

  psi_blast.inTypes = {};
  psi_blast.inTypes.push_back("http://edamontology.org/data_0857");
  psi_blast.inTypes.push_back("http://edamontology.org/data_2854");
  sort (psi_blast.inTypes.begin(),psi_blast.inTypes.end());
  psi_blast.output = "http://edamontology.org/data_2976";
  biotools.push_back(psi_blast);

  Tool psi_blast_rest;
  psi_blast_rest.id = "psi_blast_rest";
  psi_blast_rest.operations = {"psi_blast_rest"};
  psi_blast_rest.type = "tool";

  psi_blast_rest.inTypes = {};
  psi_blast_rest.inTypes.push_back("http://edamontology.org/data_0857");
  sort (psi_blast_rest.inTypes.begin(),psi_blast_rest.inTypes.end());
  psi_blast_rest.output = "http://edamontology.org/data_2044";
  biotools.push_back(psi_blast_rest);

  Tool psi_search;
  psi_search.id = "psi_search";
  psi_search.operations = {"psi_search"};
  psi_search.type = "tool";

  psi_search.inTypes = {};
  psi_search.inTypes.push_back("http://edamontology.org/data_0857");
  psi_search.inTypes.push_back("http://edamontology.org/data_2854");
  sort (psi_search.inTypes.begin(),psi_search.inTypes.end());
  psi_search.output = "http://edamontology.org/data_2976";
  biotools.push_back(psi_search);

  Tool pssalib;
  pssalib.id = "pssalib";
  pssalib.operations = {"pssalib"};
  pssalib.type = "tool";

  pssalib.inTypes = {};
  pssalib.inTypes.push_back("http://edamontology.org/data_2600");
  sort (pssalib.inTypes.begin(),pssalib.inTypes.end());
  pssalib.output = "http://edamontology.org/data_2978";
  biotools.push_back(pssalib);

  Tool psychoprot;
  psychoprot.id = "psychoprot";
  psychoprot.operations = {"psychoprot"};
  psychoprot.type = "tool";

  psychoprot.inTypes = {};
  psychoprot.inTypes.push_back("http://edamontology.org/data_0950");
  psychoprot.inTypes.push_back("http://edamontology.org/data_2087");
  psychoprot.inTypes.push_back("http://edamontology.org/data_2884");
  sort (psychoprot.inTypes.begin(),psychoprot.inTypes.end());
  psychoprot.output = "http://edamontology.org/data_0863";
  psychoprot.output = "http://edamontology.org/data_3154";
  biotools.push_back(psychoprot);

  Tool pubmeth;
  pubmeth.id = "pubmeth";
  pubmeth.operations = {"pubmeth"};
  pubmeth.type = "tool";

  pubmeth.inTypes = {};
  pubmeth.inTypes.push_back("http://edamontology.org/data_0916");
  sort (pubmeth.inTypes.begin(),pubmeth.inTypes.end());
  pubmeth.output = "http://edamontology.org/data_1026";
  biotools.push_back(pubmeth);

  Tool r3cpet;
  r3cpet.id = "r3cpet";
  r3cpet.operations = {"r3cpet"};
  r3cpet.type = "tool";

  r3cpet.inTypes = {};
  r3cpet.inTypes.push_back("http://edamontology.org/data_2600");
  sort (r3cpet.inTypes.begin(),r3cpet.inTypes.end());
  r3cpet.output = "http://edamontology.org/data_0849";
  biotools.push_back(r3cpet);

  Tool raven_toolbox;
  raven_toolbox.id = "raven_toolbox";
  raven_toolbox.operations = {"raven_toolbox"};
  raven_toolbox.type = "tool";

  raven_toolbox.inTypes = {};
  raven_toolbox.inTypes.push_back("http://edamontology.org/data_2600");
  raven_toolbox.inTypes.push_back("http://edamontology.org/data_3722");
  sort (raven_toolbox.inTypes.begin(),raven_toolbox.inTypes.end());
  raven_toolbox.output = "http://edamontology.org/data_2976";
  raven_toolbox.output = "http://edamontology.org/data_2600";
  raven_toolbox.output = "http://edamontology.org/data_3112";
  biotools.push_back(raven_toolbox);

  Tool realphy;
  realphy.id = "realphy";
  realphy.operations = {"realphy"};
  realphy.type = "tool";

  realphy.inTypes = {};
  realphy.inTypes.push_back("http://edamontology.org/data_0872");
  sort (realphy.inTypes.begin(),realphy.inTypes.end());
  realphy.output = "http://edamontology.org/data_2787";
  realphy.output = "http://edamontology.org/data_1234";
  realphy.output = "http://edamontology.org/data_2084";
  biotools.push_back(realphy);

  Tool refseq;
  refseq.id = "refseq";
  refseq.operations = {"refseq"};
  refseq.type = "tool";

  refseq.inTypes = {};
  refseq.inTypes.push_back("http://edamontology.org/data_0849");
  sort (refseq.inTypes.begin(),refseq.inTypes.end());
  refseq.output = "http://edamontology.org/data_0989";
  biotools.push_back(refseq);

  Tool remodiscovery;
  remodiscovery.id = "remodiscovery";
  remodiscovery.operations = {"remodiscovery"};
  remodiscovery.type = "tool";

  remodiscovery.inTypes = {};
  remodiscovery.inTypes.push_back("http://edamontology.org/data_2070");
  sort (remodiscovery.inTypes.begin(),remodiscovery.inTypes.end());
  remodiscovery.output = "http://edamontology.org/data_2603";
  remodiscovery.output = "http://edamontology.org/data_2600";
  remodiscovery.output = "http://edamontology.org/data_2070";
  biotools.push_back(remodiscovery);

  Tool repeatsdb;
  repeatsdb.id = "repeatsdb";
  repeatsdb.operations = {"repeatsdb"};
  repeatsdb.type = "tool";

  repeatsdb.inTypes = {};
  repeatsdb.inTypes.push_back("http://edamontology.org/data_1255");
  repeatsdb.inTypes.push_back("http://edamontology.org/data_1255");
  sort (repeatsdb.inTypes.begin(),repeatsdb.inTypes.end());
  repeatsdb.output = "http://edamontology.org/data_3021";
  repeatsdb.output = "http://edamontology.org/data_2007";
  repeatsdb.output = "http://edamontology.org/data_1127";
  biotools.push_back(repeatsdb);

  Tool resid;
  resid.id = "resid";
  resid.operations = {"resid"};
  resid.type = "tool";

  resid.inTypes = {};
  resid.inTypes.push_back("http://edamontology.org/data_0896");
  sort (resid.inTypes.begin(),resid.inTypes.end());
  resid.output = "http://edamontology.org/data_2619";
  biotools.push_back(resid);

  Tool rfam_search;
  rfam_search.id = "rfam_search";
  rfam_search.operations = {"rfam_search"};
  rfam_search.type = "tool";

  rfam_search.inTypes = {};
  rfam_search.inTypes.push_back("http://edamontology.org/data_0857");
  sort (rfam_search.inTypes.begin(),rfam_search.inTypes.end());
  rfam_search.output = "http://edamontology.org/data_2977";
  biotools.push_back(rfam_search);

  Tool rnavirusdb;
  rnavirusdb.id = "rnavirusdb";
  rnavirusdb.operations = {"rnavirusdb"};
  rnavirusdb.type = "tool";

  rnavirusdb.inTypes = {};
  rnavirusdb.inTypes.push_back("http://edamontology.org/data_2530");
  sort (rnavirusdb.inTypes.begin(),rnavirusdb.inTypes.end());
  rnavirusdb.output = "http://edamontology.org/data_2784";
  biotools.push_back(rnavirusdb);

  Tool rouge;
  rouge.id = "rouge";
  rouge.operations = {"rouge"};
  rouge.type = "tool";

  rouge.inTypes = {};
  rouge.inTypes.push_back("http://edamontology.org/data_0916");
  sort (rouge.inTypes.begin(),rouge.inTypes.end());
  rouge.output = "http://edamontology.org/data_2393";
  biotools.push_back(rouge);

  Tool rseqrep;
  rseqrep.id = "rseqrep";
  rseqrep.operations = {"rseqrep"};
  rseqrep.type = "tool";

  rseqrep.inTypes = {};
  rseqrep.inTypes.push_back("http://edamontology.org/data_1636");
  rseqrep.inTypes.push_back("http://edamontology.org/data_0928");
  rseqrep.inTypes.push_back("http://edamontology.org/data_2048");
  sort (rseqrep.inTypes.begin(),rseqrep.inTypes.end());
  rseqrep.output = "http://edamontology.org/data_3495";
  biotools.push_back(rseqrep);

  Tool sabio_rk;
  sabio_rk.id = "sabio_rk";
  sabio_rk.operations = {"sabio_rk"};
  sabio_rk.type = "tool";

  sabio_rk.inTypes = {};
  sabio_rk.inTypes.push_back("http://edamontology.org/data_2978");
  sort (sabio_rk.inTypes.begin(),sabio_rk.inTypes.end());
  sabio_rk.output = "http://edamontology.org/data_2309";
  biotools.push_back(sabio_rk);

  Tool sapp;
  sapp.id = "sapp";
  sapp.operations = {"sapp"};
  sapp.type = "tool";

  sapp.inTypes = {};
  sapp.inTypes.push_back("http://edamontology.org/data_2044");
  sort (sapp.inTypes.begin(),sapp.inTypes.end());
  sapp.output = "http://edamontology.org/data_2044";
  biotools.push_back(sapp);

  Tool sas;
  sas.id = "sas";
  sas.operations = {"sas"};
  sas.type = "tool";

  sas.inTypes = {};
  sas.inTypes.push_back("http://edamontology.org/data_0863");
  sas.inTypes.push_back("http://edamontology.org/data_1277");
  sort (sas.inTypes.begin(),sas.inTypes.end());
  sas.output = "http://edamontology.org/data_2976";
  biotools.push_back(sas);

  Tool scenery;
  scenery.id = "scenery";
  scenery.operations = {"scenery"};
  scenery.type = "tool";

  scenery.inTypes = {};
  scenery.inTypes.push_back("http://edamontology.org/data_2600");
  sort (scenery.inTypes.begin(),scenery.inTypes.end());
  scenery.output = "http://edamontology.org/data_2082";
  biotools.push_back(scenery);

  Tool sci_ai;
  sci_ai.id = "sci_ai";
  sci_ai.operations = {"sci_ai"};
  sci_ai.type = "tool";

  sci_ai.inTypes = {};
  sci_ai.inTypes.push_back("http://edamontology.org/data_3779");
  sort (sci_ai.inTypes.begin(),sci_ai.inTypes.end());
  sci_ai.output = "http://edamontology.org/data_2526";
  biotools.push_back(sci_ai);

  Tool scowl;
  scowl.id = "scowl";
  scowl.operations = {"scowl"};
  scowl.type = "tool";

  scowl.inTypes = {};
  scowl.inTypes.push_back("http://edamontology.org/data_0906");
  sort (scowl.inTypes.begin(),scowl.inTypes.end());
  scowl.output = "http://edamontology.org/data_1127";
  biotools.push_back(scowl);

  Tool scry;
  scry.id = "scry";
  scry.operations = {"scry"};
  scry.type = "tool";

  scry.inTypes = {};
  scry.inTypes.push_back("http://edamontology.org/data_0842");
  sort (scry.inTypes.begin(),scry.inTypes.end());
  scry.output = "http://edamontology.org/data_0842";
  biotools.push_back(scry);

  Tool seattlesnps;
  seattlesnps.id = "seattlesnps";
  seattlesnps.operations = {"seattlesnps"};
  seattlesnps.type = "tool";

  seattlesnps.inTypes = {};
  seattlesnps.inTypes.push_back("http://edamontology.org/data_0916");
  sort (seattlesnps.inTypes.begin(),seattlesnps.inTypes.end());
  seattlesnps.output = "http://edamontology.org/data_1026";
  biotools.push_back(seattlesnps);

  Tool segmentseq;
  segmentseq.id = "segmentseq";
  segmentseq.operations = {"segmentseq"};
  segmentseq.type = "tool";

  segmentseq.inTypes = {};
  segmentseq.inTypes.push_back("http://edamontology.org/data_2884");
  sort (segmentseq.inTypes.begin(),segmentseq.inTypes.end());
  segmentseq.output = "http://edamontology.org/data_1383";
  biotools.push_back(segmentseq);

  Tool selectome;
  selectome.id = "selectome";
  selectome.operations = {"selectome"};
  selectome.type = "tool";

  selectome.inTypes = {};
  selectome.inTypes.push_back("http://edamontology.org/data_0872");
  selectome.inTypes.push_back("http://edamontology.org/data_0916");
  selectome.inTypes.push_back("http://edamontology.org/data_2093");
  sort (selectome.inTypes.begin(),selectome.inTypes.end());
  selectome.output = "http://edamontology.org/data_0842";
  selectome.output = "http://edamontology.org/data_1075";
  selectome.output = "http://edamontology.org/data_1868";
  biotools.push_back(selectome);

  Tool seqretsetall;
  seqretsetall.id = "seqretsetall";
  seqretsetall.operations = {"seqretsetall"};
  seqretsetall.type = "tool";

  seqretsetall.inTypes = {};
  seqretsetall.inTypes.push_back("http://edamontology.org/data_0849");
  sort (seqretsetall.inTypes.begin(),seqretsetall.inTypes.end());
  seqretsetall.output = "http://edamontology.org/data_0849";
  biotools.push_back(seqretsetall);

  Tool sequenceserver;
  sequenceserver.id = "sequenceserver";
  sequenceserver.operations = {"sequenceserver"};
  sequenceserver.type = "tool";

  sequenceserver.inTypes = {};
  sequenceserver.inTypes.push_back("http://edamontology.org/data_0867");
  sequenceserver.inTypes.push_back("http://edamontology.org/data_0857");
  sort (sequenceserver.inTypes.begin(),sequenceserver.inTypes.end());
  sequenceserver.output = "http://edamontology.org/data_2044";
  biotools.push_back(sequenceserver);

  Tool sib_blast;
  sib_blast.id = "sib_blast";
  sib_blast.operations = {"sib_blast"};
  sib_blast.type = "tool";

  sib_blast.inTypes = {};
  sib_blast.inTypes.push_back("http://edamontology.org/data_0857");
  sort (sib_blast.inTypes.begin(),sib_blast.inTypes.end());
  sib_blast.output = "http://edamontology.org/data_2976";
  biotools.push_back(sib_blast);

  Tool silva;
  silva.id = "silva";
  silva.operations = {"silva"};
  silva.type = "tool";

  silva.inTypes = {};
  silva.inTypes.push_back("http://edamontology.org/data_2955");
  silva.inTypes.push_back("http://edamontology.org/data_1383");
  sort (silva.inTypes.begin(),silva.inTypes.end());
  silva.output = "http://edamontology.org/data_1097";
  silva.output = "http://edamontology.org/data_1868";
  silva.output = "http://edamontology.org/data_1046";
  silva.output = "http://edamontology.org/data_1088";
  silva.output = "http://edamontology.org/data_2909";
  biotools.push_back(silva);

  Tool silvangs;
  silvangs.id = "silvangs";
  silvangs.operations = {"silvangs"};
  silvangs.type = "tool";

  silvangs.inTypes = {};
  silvangs.inTypes.push_back("http://edamontology.org/data_2977");
  silvangs.inTypes.push_back("http://edamontology.org/data_2082");
  silvangs.inTypes.push_back("http://edamontology.org/data_2884");
  silvangs.inTypes.push_back("http://edamontology.org/data_2048");
  silvangs.inTypes.push_back("http://edamontology.org/data_1246");
  silvangs.inTypes.push_back("http://edamontology.org/data_2977");
  sort (silvangs.inTypes.begin(),silvangs.inTypes.end());
  silvangs.output = "http://edamontology.org/data_2977";
  biotools.push_back(silvangs);

  Tool sisyphus;
  sisyphus.id = "sisyphus";
  sisyphus.operations = {"sisyphus"};
  sisyphus.type = "tool";

  sisyphus.inTypes = {};
  sisyphus.inTypes.push_back("http://edamontology.org/data_1481");
  sort (sisyphus.inTypes.begin(),sisyphus.inTypes.end());
  sisyphus.output = "http://edamontology.org/data_2793";
  biotools.push_back(sisyphus);

  Tool slider;
  slider.id = "slider";
  slider.operations = {"slider"};
  slider.type = "tool";

  slider.inTypes = {};
  slider.inTypes.push_back("http://edamontology.org/data_1383");
  slider.inTypes.push_back("http://edamontology.org/data_0867");
  sort (slider.inTypes.begin(),slider.inTypes.end());
  slider.output = "http://edamontology.org/data_2959";
  slider.output = "http://edamontology.org/data_2093";
  biotools.push_back(slider);

  Tool smart;
  smart.id = "smart";
  smart.operations = {"smart"};
  smart.type = "tool";

  smart.inTypes = {};
  smart.inTypes.push_back("http://edamontology.org/data_1537");
  sort (smart.inTypes.begin(),smart.inTypes.end());
  smart.output = "http://edamontology.org/data_2782";
  biotools.push_back(smart);

  Tool spem;
  spem.id = "spem";
  spem.operations = {"spem"};
  spem.type = "tool";

  spem.inTypes = {};
  spem.inTypes.push_back("http://edamontology.org/data_2600");
  sort (spem.inTypes.begin(),spem.inTypes.end());
  spem.output = "http://edamontology.org/data_2603";
  biotools.push_back(spem);

  Tool spliceaid;
  spliceaid.id = "spliceaid";
  spliceaid.operations = {"spliceaid"};
  spliceaid.type = "tool";

  spliceaid.inTypes = {};
  spliceaid.inTypes.push_back("http://edamontology.org/data_0896");
  sort (spliceaid.inTypes.begin(),spliceaid.inTypes.end());
  spliceaid.output = "http://edamontology.org/data_1009";
  biotools.push_back(spliceaid);

  Tool swepep;
  swepep.id = "swepep";
  swepep.operations = {"swepep"};
  swepep.type = "tool";

  swepep.inTypes = {};
  swepep.inTypes.push_back("http://edamontology.org/data_2979");
  sort (swepep.inTypes.begin(),swepep.inTypes.end());
  swepep.output = "http://edamontology.org/data_2906";
  biotools.push_back(swepep);

  Tool swipe;
  swipe.id = "swipe";
  swipe.operations = {"swipe"};
  swipe.type = "tool";

  swipe.inTypes = {};
  swipe.inTypes.push_back("http://edamontology.org/data_1383");
  swipe.inTypes.push_back("http://edamontology.org/data_1384");
  sort (swipe.inTypes.begin(),swipe.inTypes.end());
  swipe.output = "http://edamontology.org/data_2976";
  swipe.output = "http://edamontology.org/data_2977";
  biotools.push_back(swipe);

  Tool swiss_2dpage;
  swiss_2dpage.id = "swiss_2dpage";
  swiss_2dpage.operations = {"swiss_2dpage"};
  swiss_2dpage.type = "tool";

  swiss_2dpage.inTypes = {};
  swiss_2dpage.inTypes.push_back("http://edamontology.org/data_2531");
  sort (swiss_2dpage.inTypes.begin(),swiss_2dpage.inTypes.end());
  swiss_2dpage.output = "http://edamontology.org/data_0989";
  biotools.push_back(swiss_2dpage);

  Tool systempiper;
  systempiper.id = "systempiper";
  systempiper.operations = {"systempiper"};
  systempiper.type = "tool";

  systempiper.inTypes = {};
  systempiper.inTypes.push_back("http://edamontology.org/data_1383");
  sort (systempiper.inTypes.begin(),systempiper.inTypes.end());
  systempiper.output = "http://edamontology.org/data_0849";
  biotools.push_back(systempiper);

  Tool tapir;
  tapir.id = "tapir";
  tapir.operations = {"tapir"};
  tapir.type = "tool";

  tapir.inTypes = {};
  tapir.inTypes.push_back("http://edamontology.org/data_1276");
  sort (tapir.inTypes.begin(),tapir.inTypes.end());
  tapir.output = "http://edamontology.org/data_1234";
  biotools.push_back(tapir);

  Tool tassdb;
  tassdb.id = "tassdb";
  tassdb.operations = {"tassdb"};
  tassdb.type = "tool";

  tassdb.inTypes = {};
  tassdb.inTypes.push_back("http://edamontology.org/data_1276");
  sort (tassdb.inTypes.begin(),tassdb.inTypes.end());
  tassdb.output = "http://edamontology.org/data_1026";
  biotools.push_back(tassdb);

  Tool tcdb;
  tcdb.id = "tcdb";
  tcdb.operations = {"tcdb"};
  tcdb.type = "tool";

  tcdb.inTypes = {};
  tcdb.inTypes.push_back("http://edamontology.org/data_1277");
  sort (tcdb.inTypes.begin(),tcdb.inTypes.end());
  tcdb.output = "http://edamontology.org/data_2756";
  biotools.push_back(tcdb);

  Tool ternarynet;
  ternarynet.id = "ternarynet";
  ternarynet.operations = {"ternarynet"};
  ternarynet.type = "tool";

  ternarynet.inTypes = {};
  ternarynet.inTypes.push_back("http://edamontology.org/data_0951");
  sort (ternarynet.inTypes.begin(),ternarynet.inTypes.end());
  ternarynet.output = "http://edamontology.org/data_3108";
  ternarynet.output = "http://edamontology.org/data_3112";
  biotools.push_back(ternarynet);

  Tool textsearch;
  textsearch.id = "textsearch";
  textsearch.operations = {"textsearch"};
  textsearch.type = "tool";

  textsearch.inTypes = {};
  textsearch.inTypes.push_back("http://edamontology.org/data_3756");
  sort (textsearch.inTypes.begin(),textsearch.inTypes.end());
  textsearch.output = "http://edamontology.org/data_0849";
  biotools.push_back(textsearch);

  Tool theseed;
  theseed.id = "theseed";
  theseed.operations = {"theseed"};
  theseed.type = "tool";

  theseed.inTypes = {};
  theseed.inTypes.push_back("http://edamontology.org/data_2711");
  sort (theseed.inTypes.begin(),theseed.inTypes.end());
  theseed.output = "http://edamontology.org/data_2737";
  biotools.push_back(theseed);

  Tool tigrfams;
  tigrfams.id = "tigrfams";
  tigrfams.operations = {"tigrfams"};
  tigrfams.type = "tool";

  tigrfams.inTypes = {};
  tigrfams.inTypes.push_back("http://edamontology.org/data_1354");
  sort (tigrfams.inTypes.begin(),tigrfams.inTypes.end());
  tigrfams.output = "http://edamontology.org/data_1141";
  biotools.push_back(tigrfams);

  Tool topdb;
  topdb.id = "topdb";
  topdb.operations = {"topdb"};
  topdb.type = "tool";

  topdb.inTypes = {};
  topdb.inTypes.push_back("http://edamontology.org/data_1277");
  sort (topdb.inTypes.begin(),topdb.inTypes.end());
  topdb.output = "http://edamontology.org/data_2789";
  biotools.push_back(topdb);

  Tool toxodb;
  toxodb.id = "toxodb";
  toxodb.operations = {"toxodb"};
  toxodb.type = "tool";

  toxodb.inTypes = {};
  toxodb.inTypes.push_back("http://edamontology.org/data_0916");
  sort (toxodb.inTypes.begin(),toxodb.inTypes.end());
  toxodb.output = "http://edamontology.org/data_2295";
  biotools.push_back(toxodb);

  Tool trans_abyss;
  trans_abyss.id = "trans_abyss";
  trans_abyss.operations = {"trans_abyss"};
  trans_abyss.type = "tool";

  trans_abyss.inTypes = {};
  trans_abyss.inTypes.push_back("http://edamontology.org/data_2977");
  sort (trans_abyss.inTypes.begin(),trans_abyss.inTypes.end());
  trans_abyss.output = "http://edamontology.org/data_2977";
  biotools.push_back(trans_abyss);

  Tool trichdb;
  trichdb.id = "trichdb";
  trichdb.operations = {"trichdb"};
  trichdb.type = "tool";

  trichdb.inTypes = {};
  trichdb.inTypes.push_back("http://edamontology.org/data_0916");
  sort (trichdb.inTypes.begin(),trichdb.inTypes.end());
  trichdb.output = "http://edamontology.org/data_2295";
  biotools.push_back(trichdb);

  Tool trifusion;
  trifusion.id = "trifusion";
  trifusion.operations = {"trifusion"};
  trifusion.type = "tool";

  trifusion.inTypes = {};
  trifusion.inTypes.push_back("http://edamontology.org/data_0850");
  sort (trifusion.inTypes.begin(),trifusion.inTypes.end());
  trifusion.output = "http://edamontology.org/data_0850";
  biotools.push_back(trifusion);

  Tool triton;
  triton.id = "triton";
  triton.operations = {"triton"};
  triton.type = "tool";

  triton.inTypes = {};
  triton.inTypes.push_back("http://edamontology.org/data_2048");
  sort (triton.inTypes.begin(),triton.inTypes.end());
  triton.output = "http://edamontology.org/data_1759";
  biotools.push_back(triton);

  Tool tuberculist;
  tuberculist.id = "tuberculist";
  tuberculist.operations = {"tuberculist"};
  tuberculist.type = "tool";

  tuberculist.inTypes = {};
  tuberculist.inTypes.push_back("http://edamontology.org/data_0916");
  sort (tuberculist.inTypes.begin(),tuberculist.inTypes.end());
  tuberculist.output = "http://edamontology.org/data_1097";
  biotools.push_back(tuberculist);

  Tool twofeat;
  twofeat.id = "twofeat";
  twofeat.operations = {"twofeat"};
  twofeat.type = "tool";

  twofeat.inTypes = {};
  twofeat.inTypes.push_back("http://edamontology.org/data_1255");
  sort (twofeat.inTypes.begin(),twofeat.inTypes.end());
  twofeat.output = "http://edamontology.org/data_0849";
  biotools.push_back(twofeat);

  Tool unicarb_db;
  unicarb_db.id = "unicarb_db";
  unicarb_db.operations = {"unicarb_db"};
  unicarb_db.type = "tool";

  unicarb_db.inTypes = {};
  unicarb_db.inTypes.push_back("http://edamontology.org/data_3425");
  sort (unicarb_db.inTypes.begin(),unicarb_db.inTypes.end());
  unicarb_db.output = "http://edamontology.org/data_0968";
  biotools.push_back(unicarb_db);

  Tool unigene;
  unigene.id = "unigene";
  unigene.operations = {"unigene"};
  unigene.type = "tool";

  unigene.inTypes = {};
  unigene.inTypes.push_back("http://edamontology.org/data_3134");
  sort (unigene.inTypes.begin(),unigene.inTypes.end());
  unigene.output = "http://edamontology.org/data_2594";
  unigene.output = "http://edamontology.org/data_1104";
  biotools.push_back(unigene);

  Tool uniprot_ws;
  uniprot_ws.id = "uniprot_ws";
  uniprot_ws.operations = {"uniprot_ws"};
  uniprot_ws.type = "tool";

  uniprot_ws.inTypes = {};
  uniprot_ws.inTypes.push_back("http://edamontology.org/data_2976");
  sort (uniprot_ws.inTypes.begin(),uniprot_ws.inTypes.end());
  uniprot_ws.output = "http://edamontology.org/data_0842";
  biotools.push_back(uniprot_ws);

  Tool uniprot_blast;
  uniprot_blast.id = "uniprot_blast";
  uniprot_blast.operations = {"uniprot_blast"};
  uniprot_blast.type = "tool";

  uniprot_blast.inTypes = {};
  uniprot_blast.inTypes.push_back("http://edamontology.org/data_0857");
  sort (uniprot_blast.inTypes.begin(),uniprot_blast.inTypes.end());
  uniprot_blast.output = "http://edamontology.org/data_2976";
  biotools.push_back(uniprot_blast);

  Tool uniref;
  uniref.id = "uniref";
  uniref.operations = {"uniref"};
  uniref.type = "tool";

  uniref.inTypes = {};
  uniref.inTypes.push_back("http://edamontology.org/data_1245");
  sort (uniref.inTypes.begin(),uniref.inTypes.end());
  uniref.output = "http://edamontology.org/data_2347";
  biotools.push_back(uniref);

  Tool unite_rdna;
  unite_rdna.id = "unite_rdna";
  unite_rdna.operations = {"unite_rdna"};
  unite_rdna.type = "tool";

  unite_rdna.inTypes = {};
  unite_rdna.inTypes.push_back("http://edamontology.org/data_2955");
  sort (unite_rdna.inTypes.begin(),unite_rdna.inTypes.end());
  unite_rdna.output = "http://edamontology.org/data_2390";
  biotools.push_back(unite_rdna);

  Tool unitrap;
  unitrap.id = "unitrap";
  unitrap.operations = {"unitrap"};
  unitrap.type = "tool";

  unitrap.inTypes = {};
  unitrap.inTypes.push_back("http://edamontology.org/data_0916");
  sort (unitrap.inTypes.begin(),unitrap.inTypes.end());
  unitrap.output = "http://edamontology.org/data_1033";
  biotools.push_back(unitrap);

  Tool v_pipe;
  v_pipe.id = "v_pipe";
  v_pipe.operations = {"v_pipe"};
  v_pipe.type = "tool";

  v_pipe.inTypes = {};
  v_pipe.inTypes.push_back("http://edamontology.org/data_0920");
  sort (v_pipe.inTypes.begin(),v_pipe.inTypes.end());
  v_pipe.output = "http://edamontology.org/data_2975";
  biotools.push_back(v_pipe);

  Tool vhldb;
  vhldb.id = "vhldb";
  vhldb.operations = {"vhldb"};
  vhldb.type = "tool";

  vhldb.inTypes = {};
  vhldb.inTypes.push_back("http://edamontology.org/data_0896");
  sort (vhldb.inTypes.begin(),vhldb.inTypes.end());
  vhldb.output = "http://edamontology.org/data_2538";
  biotools.push_back(vhldb);

  Tool war;
  war.id = "war";
  war.operations = {"war"};
  war.type = "tool";

  war.inTypes = {};
  war.inTypes.push_back("http://edamontology.org/data_0863");
  sort (war.inTypes.begin(),war.inTypes.end());
  war.output = "http://edamontology.org/data_3495";
  war.output = "http://edamontology.org/data_0863";
  biotools.push_back(war);

  Tool worfdb;
  worfdb.id = "worfdb";
  worfdb.operations = {"worfdb"};
  worfdb.type = "tool";

  worfdb.inTypes = {};
  worfdb.inTypes.push_back("http://edamontology.org/data_0916");
  sort (worfdb.inTypes.begin(),worfdb.inTypes.end());
  worfdb.output = "http://edamontology.org/data_1807";
  biotools.push_back(worfdb);

  Tool world_2dpage;
  world_2dpage.id = "world_2dpage";
  world_2dpage.operations = {"world_2dpage"};
  world_2dpage.type = "tool";

  world_2dpage.inTypes = {};
  world_2dpage.inTypes.push_back("http://edamontology.org/data_2531");
  sort (world_2dpage.inTypes.begin(),world_2dpage.inTypes.end());
  world_2dpage.output = "http://edamontology.org/data_1096";
  biotools.push_back(world_2dpage);

  Tool wormbase;
  wormbase.id = "wormbase";
  wormbase.operations = {"wormbase"};
  wormbase.type = "tool";

  wormbase.inTypes = {};
  wormbase.inTypes.push_back("http://edamontology.org/data_0916");
  sort (wormbase.inTypes.begin(),wormbase.inTypes.end());
  wormbase.output = "http://edamontology.org/data_1026";
  biotools.push_back(wormbase);

  Tool yeast_gene_order_browser;
  yeast_gene_order_browser.id = "yeast_gene_order_browser";
  yeast_gene_order_browser.operations = {"yeast_gene_order_browser"};
  yeast_gene_order_browser.type = "tool";

  yeast_gene_order_browser.inTypes = {};
  yeast_gene_order_browser.inTypes.push_back("http://edamontology.org/data_0916");
  sort (yeast_gene_order_browser.inTypes.begin(),yeast_gene_order_browser.inTypes.end());
  yeast_gene_order_browser.output = "http://edamontology.org/data_1026";
  biotools.push_back(yeast_gene_order_browser);

  Tool yeastgfp;
  yeastgfp.id = "yeastgfp";
  yeastgfp.operations = {"yeastgfp"};
  yeastgfp.type = "tool";

  yeastgfp.inTypes = {};
  yeastgfp.inTypes.push_back("http://edamontology.org/data_0916");
  sort (yeastgfp.inTypes.begin(),yeastgfp.inTypes.end());
  yeastgfp.output = "http://edamontology.org/data_1807";
  biotools.push_back(yeastgfp);
  return biotools;
}

//In total there were 394 tools output
