#pragma once
#include "BinomialTreeBuilder.h"
#include "CompleteGraphBuilder.h"
#include "KnodelBuilder.h"
#include "KAryTreeBuilder.h"
#include "HypercubeBuilder.h"
#include "Constants.h"

class HNAGraphFactory
{
public:
	static HNAGraphFactory* sharedFactory()
	{
		if (graphFactory == 0)
		{
			graphFactory = new HNAGraphFactory();
		}
		return graphFactory;
	}
	static void release()
	{
		if (graphFactory != 0)
		{
			delete graphFactory;
			graphFactory = 0;
		}
	}

	HNAGraph getGraph(const GraphOptions& options);

private:
	static HNAGraphFactory* graphFactory;
	HNAGraphFactory();
	~HNAGraphFactory();
	std::map<std::string, std::unique_ptr<GraphBuilder>> builders_;
};
